# def place(k, i):  # k is current row, initially k =1,  i = column
#     global x # an array that represents positions of queens on chessboard 
#     for j in range(k): # j iterates over rows
#         #case1: if there exits a queen in the same column as the queen to be placed return false 
#         #case 2: if there exits a queen diagonally to the queen to be placed
#         if x[j] == i or abs(x[j] - i) == abs(k - j):
#             return False
#     return True

# def nqueen(k, n): #k = current row , n = total no. of rows
#     global x
#     for i in range(1, n + 1):  # iterates all columns of current row 
#         if place(k, i): # if we can place queen at (k,i) pos , i.e. true returned by place()
#             x[k-1] = i # update pos of queen in x 
#             if k == n-1: # if all queens are places in all rows
#                 print(x) # pos of queens from array
#             else:
#                 nqueen(k + 1, n) # recursively call for next k+1 row

# if __name__ == '__main__':
#     print("Enter n")
#     n = int(input())
#     x = [0 for _ in range(n)]
#     nqueen(0, n)


def place(k, i):
    global x
    for j in range(k):
        if x[j] == i or abs(x[j] - i) == abs(k - j):
            return False
    return True

def nqueen(k, n):
    global x
    for i in range(1, n + 1):
        if place(k, i):
            x[k] = i  # Update pos of queen in x
            if k == n - 1:
                print(x)
            else:
                nqueen(k + 1, n)

if __name__ == '__main__':
    print("Enter n")
    n = int(input())
    x = [0 for _ in range(n)]
    nqueen(0, n)  # Start from row 0
