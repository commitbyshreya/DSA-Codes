INF = float('inf')

def tsp_dp(graph):
    n = len(graph)
    memo = [[-1] * (1 << n) for _ in range(n)]

    def tsp_dp_util(curr, visited):
        if visited == (1 << n) - 1:
            return graph[curr][0]  # Return to the starting city

        if memo[curr][visited] != -1:
            return memo[curr][visited]

        min_cost = INF
        for next_city in range(n):
            if visited & (1 << next_city) == 0:  # Check if next_city is not visited
                min_cost = min(min_cost, graph[curr][next_city] + tsp_dp_util(next_city, visited | (1 << next_city)))

        memo[curr][visited] = min_cost
        return min_cost

    return tsp_dp_util(0, 1)  # Start from city 0 and mark it as visited


graph = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]
print("Minimum cost of TSP:", tsp_dp(graph))
