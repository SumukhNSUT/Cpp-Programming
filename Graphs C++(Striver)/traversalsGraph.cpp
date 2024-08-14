#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Graph {
    int V; // vertices
    vector<vector<int>> adj; // adjacency list
public:
    // constructor
    Graph(int vertices) {
        V = vertices;
        adj = vector<vector<int>>(V);
    }

    // functions
    void addEdge(int u, int v) {
        // add edge between vertex u and v
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }

    void printGraph() {
        // printing adjacency list
        for (int i = 0; i < V; ++i) {
            cout << "Vertex " << i << ":";
            for (int j : adj[i]) {
                cout << " -> " << j;
            }
            cout << endl;
        }
    }

    // 1) bfs traversal of graph
    vector<int> bfs() {
        vector<int> vis(V, 0); // visited array
        vector<int> bfsResult; // to store bfs traversal result

        queue<int> q;
        // push starting node in queue
        q.push(0);
        vis[0] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfsResult.push_back(node);

            // push neighbour nodes of 'node' in the queue
            for (int i = 0; i < adj[node].size(); i++) {
                int neighbour = adj[node][i];
                if (!vis[neighbour]) {
                    vis[neighbour] = 1; // mark it visited
                    q.push(neighbour);
                }
            }
        }
        return bfsResult;
    }

    // 2) dfs traversal of graph
    void dfsHelper(int node, vector<int>& vis, vector<int>& dfsResult) {
        vis[node] = 1;
        dfsResult.push_back(node);

        for (int i = 0; i < adj[node].size(); i++) {
            int neighbour = adj[node][i];
            if (!vis[neighbour]) {
                dfsHelper(neighbour, vis, dfsResult);
            }
        }
    }

    vector<int> dfs() {
        vector<int> vis(V, 0); // visited array
        vector<int> dfsResult; // to store dfs traversal result

        // assuming graph might be disconnected, so we call DFS for every component
        for (int i = 0; i < V; ++i) {
            if (!vis[i]) {
                dfsHelper(i, vis, dfsResult);
            }
        }

        return dfsResult;
    }
};

int main() {
    int vertices = 5;
    Graph g(vertices);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Graph adjacency list:" << endl;
    g.printGraph();

    vector<int> bfsTraversal = g.bfs();

    cout << "BFS Traversal: ";
    for (int i = 0; i < bfsTraversal.size(); i++) {
        cout << bfsTraversal[i] << " ";
    }
    cout << endl;

    vector<int> dfsTraversal = g.dfs();

    cout << "DFS Traversal: ";
    for (int i = 0; i < dfsTraversal.size(); i++) {
        cout << dfsTraversal[i] << " ";
    }
    cout << endl;

    return 0;
}