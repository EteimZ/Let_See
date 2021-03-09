#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

bool isMovesLeft(char board[3][3]);

int evaluate(char b[3][3]);

int minimax(char board[3][3], int depth, bool isMax);

struct Move
{
	int row, col;
};

char player , opponent ;

struct Move findBestMove(char board[3][3]);

void Draw( char board[3][3] );

void input(char board[3][3]);

char Win( char matrix[3][3] );

int main( void )
{
	char board[3][3] =
        {
                { '_', '_', '_' },
                { '_', '_', '_' },
                { '_', '_', '_' }
        };
	
	int n = 0;    

    printf("Choose for the AI, X or O: ");
    scanf("%c", &player);

    if ( player == 'X')
        opponent = 'O';
    else if ( player == 'O')
        opponent = 'X';
    
    
	while(1)
	{	

		n++;
        if (player == 'X')
        {
            struct Move bestMove = findBestMove(board);
		    board[bestMove.row][bestMove.col] = player;
		    Draw(board);
		    if (Win(board) == 'X')
            {
                printf("X wins!\n");
                break;
            }else if (Win(board) == 'O')
            {
                printf("O wins!\n");
                break;
            }else if (Win(board) == '/' && n == 5)
            {
                printf("It's a draw!\n");
                break;
            }
		
            input(board);
        } else
        {   
            Draw(board);
            input(board);
            struct Move bestMove = findBestMove(board);
		    board[bestMove.row][bestMove.col] = player;
		    Draw(board);
		    if (Win(board) == 'X')
            {
                printf("X wins!\n");
                break;
            }else if (Win(board) == 'O')
            {
                printf("O wins!\n");
                break;
            }else if (Win(board) == '/' && n == 5)
            {
                printf("It's a draw!\n");
                break;
            }
		
        }
        
	}

	
	
    return 0;

}

void Moves(char player, char board[3][3])
{   
    if (player == 'X')
    {
        struct Move bestMove = findBestMove(board);
	    board[bestMove.row][bestMove.col] = player;
        Draw(board);
        
    }else if ( player == 'O')
    {
        /* code */
    }
    
}

void Draw(char board[3][3])
{
        system("clear");
        printf("Xs and Os\n");
        for(int i = 0; i<3; i++){
                for(int j = 0; j<3; j++){
                        printf("%c ", board[i][j]);
                }
                printf("\n");
        }
}


void input(char board[3][3])
{
	int a;
	printf("Its the player's turn. Press the number of the field: ");
	scanf("%d", &a);

	if (a == 1)
	{
		if (board[2][0] == '_')
			board[2][0] = opponent;
		else
		{
			printf("Field is already in use try again!\n");
			input(board);
		}
	}
    
    if (a == 2)
    {
        if (board[2][1] == '_')
            board[2][1] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }

    if (a == 3)
    {
        if (board[2][2] == '_')
            board[2][2] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }
    
    if (a == 4)
    {
        if (board[1][0] == '_')
            board[1][0] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }
    
    if (a == 5)
    {
        if (board[1][1] == '_')
            board[1][1] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }
        
    if (a == 6)
    {
        if (board[1][2] == '_')
            board[1][2] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }
    
    if (a == 7)
    {
        if (board[0][0] == '_')
            board[0][0] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }
        
    if (a == 8)
    {
        if (board[0][1] == '_')
            board[0][1] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }

    if (a == 9 )
    {
        if (board[0][2] == '_')
            board[0][2] = opponent;
        else
        {
            printf("Field is already in use try again!\n");
            input(board);
        }
    }
        
}

/*
void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

*/
char Win( char matrix[3][3] )
{

	//first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
        if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
                return 'X';
        if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
                return 'X';
        if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
                return 'X';
        if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
                return 'X';
        if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
                return 'X';
        if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
                return 'X';
        if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
                return 'X';
	
	//second player
        if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
                return 'O';
        if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
                return 'O';
        if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
                return 'O';
        if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
                return 'O';
        if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
                return 'O';
        if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
                return 'O';
        if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
                return 'O';
        if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
                return 'O';

	return '/';
}

bool isMovesLeft(char board[3][3])
{
        for (int i = 0; i<3; i++)
                for (int j = 0; j<3; j++)
                        if (board[i][j]=='_')
                                return 1;
        return 0;
}

int evaluate(char b[3][3])
{
        // Checking for Rows for X or O victory.
        for (int row = 0; row<3; row++)
        {
                if (b[row][0]==b[row][1] &&
                        b[row][1]==b[row][2])
                {
                        if (b[row][0]==player)
                                return +10;
                        else if (b[row][0]==opponent)
                                return -10;
                }
        }

        // Checking for Columns for X or O victory.
        for (int col = 0; col<3; col++)
        {
                if (b[0][col]==b[1][col] &&
                        b[1][col]==b[2][col])
                {
                        if (b[0][col]==player)
                                return +10;

                        else if (b[0][col]==opponent)
                                return -10;
                }
        }

        // Checking for Diagonals for X or O victory.
        if (b[0][0]==b[1][1] && b[1][1]==b[2][2])
        {
                if (b[0][0]==player)
                        return +10;
                else if (b[0][0]==opponent)
                        return -10;
        }

        if (b[0][2]==b[1][1] && b[1][1]==b[2][0])
{
                if (b[0][2]==player)
                        return +10;
                else if (b[0][2]==opponent)
                        return -10;
        }

        // Else if none of them have won then return 0
        return 0;
}

int minimax(char board[3][3], int depth, bool isMax)
{
        int score = evaluate(board);

        // If Maximizer has won the game return his/her
        // evaluated score
        if (score == 10)
                return score;

        // If Minimizer has won the game return his/her
        // evaluated score
        if (score == -10)
                return score;

        // If there are no more moves and no winner then
        // it is a tie
        if (isMovesLeft(board)==false)
                return 0;

        // If this maximizer's move
        if (isMax)
        {
                int best = -1000;

                // Traverse all cells
                for (int i = 0; i<3; i++)
                {
                        for (int j = 0; j<3; j++)
                        {
                                // Check if cell is empty
                                if (board[i][j]=='_')
                                {
                                        // Make the move
                                        board[i][j] = player;

                                        // Call minimax recursively and choose
                                        // the maximum value
                                        best = fmax( best,
                                                minimax(board, depth+1, !isMax) );

                                        // Undo the move
                                        board[i][j] = '_';
                                }
                        }
                }
                return best;
        }

        // If this minimizer's move
        else
        {
                int best = 1000;

                // Traverse all cells
                for (int i = 0; i<3; i++)
                {
                        for (int j = 0; j<3; j++)
                        {
                                // Check if cell is empty
                                if (board[i][j]=='_')
                                {
                                        // Make the move
                                        board[i][j] = opponent;

                                        // Call minimax recursively and choose
                                        // the minimum value
                                        best = fmin(best,
                                                minimax(board, depth+1, !isMax));

                                        // Undo the move
                                        board[i][j] = '_';
                                }
                        }
                }
                return best;
       }
}

struct Move findBestMove(char board[3][3])
{
        int bestVal = -1000;
        struct Move bestMove;
        bestMove.row = -1;
        bestMove.col = -1;

        // Traverse all cells, evaluate minimax function for
        // all empty cells. And return the cell with optimal
        // value.
        for (int i = 0; i<3; i++)
        {
                for (int j = 0; j<3; j++)
                {
                        // Check if cell is empty
                        if (board[i][j]=='_')
                        {
                                // Make the move
                                board[i][j] = player;

                                // compute evaluation function for this
                                // move.
                                int moveVal = minimax(board, 0, false);

                                // Undo the move
                                board[i][j] = '_';

                                // If the value of the current move is
                                // more than the best value, then update
                                // best/
                                if (moveVal > bestVal)
                                {
                                        bestMove.row = i;
                                        bestMove.col = j;
                                        bestVal = moveVal;
                                }
                        }
                }
        }
        printf("The value of the best Move is : %d\n\n",
                        bestVal);

        return bestMove;
}


