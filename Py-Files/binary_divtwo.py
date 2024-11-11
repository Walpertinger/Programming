def divtwo(orgn_num):
 count = 0
 while (orgn_num > 1):
  orgn_num = (orgn_num - 2)
  count = (count + 1)
 return count

def binary(num_to_bin):
 result = []
 while (num_to_bin > 0): #15
  
  r_half = divtwo(num_to_bin) #7
  sub_var = (r_half + r_half) #14
  bin_digit = (num_to_bin - sub_var) #1
  num_to_bin = (divtwo(sub_var)) #7

  result.append(bin_digit) #liste einschreiben [1, 1, 1, 1]

 return result
