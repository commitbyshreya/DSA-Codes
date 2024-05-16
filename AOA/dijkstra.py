import sys
from heapq import heapify,heappop, heappush

def dijkstra(graph, src, dest):
    inf = sys.maxsize #declaring inf as an infinite value
    #cost for every node , and pred is the nodes between node A to the current node 
    node_data = { 
        'A': {'cost': inf, 'pred': []},
        'B': {'cost': inf, 'pred': []},
        'C': {'cost': inf, 'pred': []},
        'D': {'cost': inf, 'pred': []},
        'E': {'cost': inf, 'pred': []},
        'F': {'cost': inf, 'pred': []},
    }

    node_data[src]['cost'] = 0 #inf -> 0
    visited = []
    temp = src
    
    # 6 edges but sol is generated in n-1 
    for i in range(5):
        if temp not in visited:  # every time check if the src is marked as visited 
            visited.append(temp) # mark node as visited 
            min_heap = []
            for j in graph[temp]:  #traversing the adjacent nodes of selected current source 
                if j not in visited: # the adjacent nodes should not be in the visited array, their cost wont be cal
                    cost = node_data[temp]['cost'] + graph[temp][j]  # src A + A -> B (B is adjacent of a)
                    if cost < node_data[j]['cost']:  # if the curr cost is less then that of adjacent node cost
                        node_data[j]['cost'] = cost # if yess then update the cost of adjacent node to curr cost 
                        node_data[j]['pred'] = node_data[temp]['pred'] + [temp] # add the pred of the src node + the src itself in the pred list
                    heappush(min_heap,(node_data[j]['cost'],j)) # push the cost of all the neigh nodes and the neigh itself
        heapify(min_heap) # actual creates the min heap
        temp = min_heap[0][1] #updates the source node for the next iteration to the node with the smallest cost from the heap.
                        
    print("Shortest Distance: " + str(node_data[dest]['cost']))
    print("Shortest Path: " + str(node_data[dest]['pred'] + [dest]))
                        
                        
if __name__ == "__main__":
    graph = {
        'A' : {'B':2 , 'C':4},
        'B' : {'A':2, 'C':3, 'D':8},
        'C' : {'A':4 ,'B':3 ,'E':5 ,'D':2},
        'D' : {'B':8 ,'C':2 ,'E':11 ,'F':22},
        'E' : {'C':5 ,'D':11 ,'F':1},
        'F' : {'D':22 ,'E':1}
    }
    source = 'A'
    destination = 'F'
    dijkstra(graph,source, destination)


