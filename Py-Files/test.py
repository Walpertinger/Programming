def divtwo(orgn_num):
    count = 0
    while (orgn_num > 1):
        orgn_num = (orgn_num - 2)
        count = (count + 1)
    return count

def binary(num_to_bin):
    temp_num = num_to_bin
    multiplier = 1  # Starten mit 1 als "virtueller" Wert

    # Zuerst finden wir den größten `multiplier`, der ins Binäre passt.
    while (divtwo(temp_num) > 0):
        temp_num = divtwo(temp_num)
        multiplier = (multiplier + multiplier)

    # Reduziere die Zahl und drucke jede Binärziffer.
    while (multiplier > 0):
        r_half = divtwo(num_to_bin)
        sub_var = (r_half + r_half)
        bin_digit = (num_to_bin - sub_var)

        print(bin_digit, end="")  # Gib jede Binärziffer direkt aus
        num_to_bin = sub_var
        multiplier = divtwo(multiplier)  # Halbiere `multiplier` für die nächste Stelle

# Eingabe
z = int(input("Gib eine Zahl ein: "))
binary(z)
