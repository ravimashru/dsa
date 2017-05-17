#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Number of nodes: ";
  cin >> n;

  int e;
  cout << endl << "Number of edges: ";
  cin >> e;

  int* source = new int[e];
  int* dest = new int[e];

  // Adjacency matrix of the graph
  int** adjmat = new int*[n];
  for (int i = 0; i < n; i++) {
    adjmat[i] = new int[n];
  }

  cout << endl
       << "Enter the source and the destination node of the edges: " << endl;

  for (int i = 0; i < e; i++) {
    cin >> source[i] >> dest[i];
  }

  bool* discovered = new bool[n];
}
