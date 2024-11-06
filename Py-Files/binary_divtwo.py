x = int(input("Give your number:"))

if x < 0:
    print("needs to be a positive number!")
elif x == 0:
    print("0 devided by anything is always still 0!")
elif x > 0 :
    gap = 1
    while x - gap - gap > 0:
        gap= gap+1
    print("it should be: ", gap)
else :
    print("Something went wrong!")    
