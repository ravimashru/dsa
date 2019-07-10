/**
 * DFS implementation to test with example in the book (Figure 22.4).
 * 
 * Input:
 * number of vertices in graph - V
 * number of edges in graph - E
 * E lines containing two integers: source destination
 * 
 */

#include<iostream>
#include<vector>

using namespace std;

void DFS(int**, int**, int, int);
void printStack();

int clockTime = 0;
vector<int> stack;

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

    // Perform DFS from each node not visited
    for (int i = 0; i < V; i++) {
        if (meta[i][0] == 0) {
            DFS(admat, meta, V, i);
        }
    }

    // Print traversal information
    for (int i = 0; i < V; i++) {
        int* metaRow = meta[i];

        cout << "Node " << i << ", " << metaRow[1] << ", " << metaRow[2] << endl;
    }

    return 0;
}

void DFS(int** admat, int** meta, int vertexCount, int nodeIndex) {

    int* nodeMeta = meta[nodeIndex];

    nodeMeta[0] = 1;
    clockTime++;
    nodeMeta[1] = clockTime;

    stack.push_back(nodeIndex);
    printStack();

    // Perform DFS on each adjacent node
    int* adRow = admat[nodeIndex];

    for (int i = 0; i < vertexCount; i++) {
        if (adRow[i] == 1) {

            // Check if not traversed
            int* adMeta = meta[i];
            if (adMeta[0] == 0) {
                DFS(admat, meta, vertexCount, i);
            }

        }
    }

    clockTime++;
    nodeMeta[2] = clockTime;
    stack.pop_back();
    printStack();

}

void printStack() {
    for(vector<int>::iterator it = stack.begin(); it != stack.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}