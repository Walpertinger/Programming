def divtwo(orgnnum):
 count = 0
 while (orgnnum > 1):
  orgnnum = (orgnnum - 2)
  count = (count + 1)
 return count

def binary(numtobin):
 result = []
 while (numtobin > 0): #15
  rhalf = divtwo(numtobin) #7
  subvar = (rhalf + rhalf) #14
  bindigit = (numtobin - subvar) #1
  result.append(bindigit) #liste einschreiben [1, 1, 1, 1]
  numtobin = (divtwo(subvar)) #7
 return result
