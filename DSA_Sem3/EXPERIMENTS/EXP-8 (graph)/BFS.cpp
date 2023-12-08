#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/* BFS-> searching technique*/

class Graph {
private:
    int V; // Number of vertices
    vector<vector<int> > adj; // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int current = q.front();
            cout << current << " ";
            q.pop();

            for (int neighbor : adj[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
};

int main() {
    Graph g(6); // Create a graph with 6 vertices

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);

    cout << "BFS starting from vertex 0: ";
    g.BFS(0);

    return 0;
}






// int main(){
//     //input n = no. of vertex, m = no. of edges
//     int n , m ;
//     cin>> n >> m;
//     vector<int> adj[n+1]; // int adjacency list it created an empty array list in front of each vertex
//     /*  1 = {stores vertexes all the adjacent edge}
//         3 = {}.....
//     */
//    //space complexity = O(2E)
//     for(int i = 0; i<m; i++){
//         int u , v;
//         cin>>u>>v;
//         // this is for undirected graph 
//         adj[u].push_back(v);
//         adj[v].push_back(u); // for directed graph the edge wont be two ways so this wont be needed 
//     }

//     return 0;
// }
