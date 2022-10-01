#"cerner_2^5_2022"  "cerner_2tothe5th_2022"

# Python program to count all duplicates from string using hashing
Number_of_chars = 256

def fillCharCounts(string, count):
    for i in string:
        count[ord(i)] += 1
    return count
# Print duplicates present in the passed string

def Print_Duplicates(string):
    # Create an array of size 256 and fill count of every character in it
    count = [0] * Number_of_chars
    count = fillCharCounts(string, count)

    # Utility Variable
    k = 0

    # Print characters having count more than 0
    for i in count:
        if int(i) > 1:
            print(chr(k) + ", count = " + str(i))
        k += 1

# Driver program to test the above function
string = "Hello Cerner"
print(Print_Duplicates(string))