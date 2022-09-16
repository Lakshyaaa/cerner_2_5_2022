#"cerner_2^5_2022"

# Program to reverse an string/Number using recursion

def rev_string(S):
    if len(S) == 0:
        return S
    else:
        return rev_string(S[1:]) + S[0]   

S = input("Enter the string = ")
print("\nOriginal String = ", S)
print("\nReversed String = ", rev_string(S))