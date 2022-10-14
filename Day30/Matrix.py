#"cerner_2^5_2022"
#"cerner_2tothe5th_2022"
#Nested list comprehension are used to iterate through each element in the matrix.
matrix = [[1,2],[3,4],[5,6]]
for row in matrix :
	print(row)
rez = [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix[0]))]
print("\n")
for row in rez:
	print(row)
