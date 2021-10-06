#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int minDist(vector<int> &dist, vector<bool> &prev, int n)
{
    // Initialize min value
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < n; v++)
        if (prev[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}
void printResults(vector<int> &dist){
    // Print distance graph
    cout <<"Vertex \t Distance from Source" << endl;
    for (int i = 0; i < dist.size(); i++){
        cout  << i << " \t\t"<<dist[i]<< endl;
    }
}

void dijkstra(vector< vector<int> > &graph, int src){
    int n = graph.size();
    
    // TODO: Implement

}


int main()
{
    vector< vector<int> > graph1 = {
        {0, 1, 2, 0, 0, 0},
        {1, 0, 0, 5, 1, 0},
        {2, 0, 0, 2, 3, 0},
        {0, 5, 2, 0, 2, 2},
        {0, 1, 3, 2, 0, 1},
        {0, 0, 0, 2, 1, 0}};

    vector< vector<int> > graph2 = { 
        { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    /* Expected output of graph1:
    Vertex   Distance from Source
        0                0
        1                4
        2                12
        3                19
        4                21
        5                11
        6                9
        7                8
        8                14
    */
    dijkstra(graph1,0);

    /* Expected output of graph2:
    Vertex   Distance from Source
        0               0
        1               1
        2               2
        3               4
        4               2
        5               3
    */
    dijkstra(graph2,0);
    return 0;                           
}