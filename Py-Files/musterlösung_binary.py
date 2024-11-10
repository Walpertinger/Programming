def divtwo(x):
    y = 1
    while ((y + y) <= x):
        y = (y + 1)
    return (y - 1)

def bin(n):
    if (n <= 0):
        print(0)
    else:
        while (n > 0):
            y = divtwo(n)
            if ((y + y) == n):
                print(0)
            else:
                print(1)
            n = y
    return -1