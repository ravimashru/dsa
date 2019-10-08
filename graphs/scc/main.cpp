/**
 * Program to calculate strongly connected components of a digraph.
 * To test with example in the book (Figure 22.9)
 * 
 * Input:
 * number of vertices in graph - V
 * number of edges in graph - E
 * E lines containing two integers: source destination
 * 
 */
#include<iostream>

using namespace std;

int main() {

    int V, E; cin >> V >> E;

    // Adjacency matrix to store graph
    int** admat = new int*[V];
    for (int i = 0; i < V; i++) {
        admat[i] = new int[V];
    }

    // Initialize to all zeros
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            admat[i][j] = 0;
        }
    }

    // Array to keep track of traversed nodes, start time and finish time
    // Rows = nodes; Cols = traversed, start time, finishtime
    int** meta = new int*[V];
    for (int i = 0; i < V; i++) {
        meta[i] = new int[3];
        meta[i][0] = meta[i][1] = meta[i][2] = 0;
    }

    // Read edges
    for (int i = 0; i < E; i++) {
        int a, b; cin >> a >> b;
        admat[a][b] = 1;
    }

    return 0;
}