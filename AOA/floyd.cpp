// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// #define INF 999

// void floydWarshall(vector<vector<int> > &graph, int V){
//     /* Step 1 - create a new distance matrix */
//     vector<vector<int> > dist(V, vector<int>(V));

//     // Step 2 - initialize dist matrix with the input values(dist) of the graph matrix
//     for(int i = 0; i<V; i++){
//         for(int j = 0; j<V;j++){
//             dist[i][j] = graph[i][j];
//         }
//     }

//     //Step 3 - Update the distance matrix by considering all vertices as intermediate (via)
//     for(int k = 0 ; k<V; k++){
//         //Step 4 - Pick all vertices as source one by one (rows)
//         for(int i =0;i<V;i++){
//             //Step 5 - Pick all vertices as destination for above selected source (colums)
//             for(int j = 0; j<V; j++){
//                 // Step 6 - If dist between i and j is less via K then update dist[i][j] 
//                 if(dist[i][k] + dist[k][j] < dist[i][j] ){
//                     dist[i][j] = dist[i][k] + dist[k][j];
//                 }
//             }
//         }
//     } 

//     //Step 7 - Print the matrix 
//     cout<<"\nOutput: \n"; 
//     for(int i = 0; i<V;i++){
//         for(int j=0; j<V;j++){
//             if(dist[i][j] == INF){
//                 cout<<"INF\t";
//             }else cout<< dist[i][j] <<"\t";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int V; 
//     cout<<"Enter number of vertices: ";
//     cin>>V;

//     vector<vector<int> > graph(V, vector<int>(V));
//     cout<<"Enter the adjacency matrix: "<<endl;

//     for(int i = 0; i<V;i++){
//         for(int j = 0; j<V; j++){
//           cin>> graph[i][j];
//         }
//     }
//     floydWarshall(graph, V);

//     return 0;
// }




#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

#define INF 999

void floyd(vector<vector<int> > &graph, int V){

      vector<vector<int> > dist(V, vector<int> (V));

        for(int i=0;i<V;i++){
            for(int j=0; j<V;j++){
                dist[i][j] = graph[i][j];
            }
        }

        for(int k = 0; k < V; k++){
            for(int i = 0; i<V;i++){
                for(int j = 0; j<V;j++){
                    if(dist[i][k] + dist[k][j] < dist[i][j]){
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }

    for(int i=0;i<V;i++){
        for(int j=0; j<V;j++){
            if(dist[i][j] == INF) {
                    cout<<"INF\t";
            }
            else{
                cout<<dist[i][j]<<"\t";
            }
        }
            cout<<endl;
    }

}

int main() {
       int V; 
       cout<<"Enter no. of vertices: ";
       cin>>V;

       vector<vector<int> > graph(V, vector<int> (V));
       cout<<"Enter the adjacency matrix: "<<endl;
        for(int i=0;i<V;i++){
            for(int j=0; j<V;j++){
            cin>>graph[i][j];
            }
        }

        floyd(graph, V);
    return 0;
}