def lcs(X,Y,m,n):
    #if either of the string has len 0 no subsequence, 
    if m==0 or n==0:
        return 0,"" # return 0 as len , empty string as subsequence
    #if last char of both strings are equal 
    elif X[m-1] == Y[n-1]:
        length, lcs_string = lcs(X, Y, m-1, n-1) #remove last char from both strings as they are equal
        return length + 1, lcs_string + X[m-1]
    #if last char don't match 
    else:
        #recursively calls rcs func in two cases
        length1, lcs_string1 = lcs(X,Y,m-1,n) # removing the last char of string X
        length2, lcs_string2 = lcs(X,Y,m,n-1) # then removing the last char of string Y
        if length1 >length2:
            return length1, lcs_string1
        else:
            return length2, lcs_string2
            
S1 = input("Enter string1: ")
S2 = input("Enter string2: ")

length, lcs_string = lcs(S1, S2, len(S1), len(S2))
print("Length of LCS: ", length)
print("LCS: ", lcs_string)


