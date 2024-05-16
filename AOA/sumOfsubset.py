def sum_of_subsets(X, M):
    n = len(X)
    subsets = []
    current_Sum = 0
    remaining = sum(X)

    def sum_of_sub(s, k, r):
        nonlocal current_Sum, remaining, subsets
        if s == M:
            print(subsets)
            return
        if s + X[k] <= M:
            subsets.append(X[k])
            sum_of_sub(s + X[k], k + 1, r - X[k])
            subsets.pop()
        if s + r - X[k] >= M and s + X[k + 1] <= M:
            sum_of_sub(s, k + 1, r - X[k])

    X.sort()
    sum_of_sub(current_Sum, 0, remaining)

if __name__ == "__main__":
    X = list(map(int, input("Enter the list of integers (separated by spaces): ").split()))
    M = int(input("Enter the target sum (M): "))
    print("THE SUM OF SUBSET SOLUTIONS FOR THE ABOVE LIST OF INTEGERS AND TARGET SUM IS AS FOLLOWS (if no solution is there then no subsets would be printed)")
    sum_of_subsets(X, M)
