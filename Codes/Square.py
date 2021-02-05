# Python implentation of Square.c
n = int(input("Enter Number: "))
x = 0
for i in range(n):
    x +=1
    y = 1
    print("")
    for i in range(n):
        m = x*y
        print(f'|{m}|', end = '')
        y += 1
print("")

