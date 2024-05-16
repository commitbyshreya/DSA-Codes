def knapsack(Capacity, weight, profit, n):
    if Capacity == 0 or n == 0: # if capacity is 0 or items are 0 , is means knapsack is full no profit can be made
        return 0 
    if weight[n-1] > Capacity: #if weight of current item is more then capacity
        # recursively calls the knapsack but exluding the current item (n-1) as it extends the limit 
        return knapsack(Capacity, weight, profit, n-1) 
    else: # the current item does not exceed the limit
        #returns max profit but either including or excluding the current item
        return max(
            # it represent the max proft that can be obtained if current item is included in knapsack profit(n-1)
            # knapsack(Capacity-weight[n-1], weight[n-1], profit, n-1) -> this part calculates max profit of remaining 
            # items that can be fit in knapsack after including current item 
            profit[n-1] + knapsack(Capacity-weight[n-1], weight, profit, n-1),
            #max profit that can be obtained if the current item is not included in the knapsack
            knapsack(Capacity, weight, profit, n-1)
        )
        

profit = [1,2,3]
weight = [4,5,1]
Capacity = 4
n = len(profit)
print(knapsack(Capacity,weight,profit,n))
