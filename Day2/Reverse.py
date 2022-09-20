#"cerner_2^5_2022"
#"cerner_2tothe5th_2022"
# Program to reverse an string/Number using recursion

def rev_string(S):
    if len(S) == 0:  #Checking the lenght of string
        return S
    else:
        #!=0, the reverse function is recursively called to slice the part of the string except the first character 
        # and then concatenate the first character to the end of the sliced string.
        return rev_string(S[1:]) + S[0]   
    
S = input("Enter the string = ")    #User must enter the string or number.
print("\nOriginal String = ", S)    #Print Function 
print("\nReversed String = ", rev_string(S))
