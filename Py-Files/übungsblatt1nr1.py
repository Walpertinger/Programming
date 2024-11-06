x = int(input("Gib eine Zahl ein: "))
y = int(input("Gib nochmal eine Zahl ein: "))

#the hard way
def f(x):
  if x<0:
   return 0
  
  elif x==0:
   return 1
  
  else:
   return 2 * f(x-1)

#the easy way
def g(y):
 return 2 ** y

print("Das Ergebnis ist: ", f(x))
print("Das 2.Ergebnis ist: ", g(y))