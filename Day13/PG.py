#"cerner_2^5_2022"
#"cerner_2tothe5th_2022"

#Password Generator.

import string
import random


def Generate_Password(num):
    password = ''

    for n in range(num):
        x = random.randint(0, 94)
        password += string.printable[x]
    return password

print("Password = ",Generate_Password(16))

