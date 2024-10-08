#include <iostream>
#include <vector>
using namespace std;

void dfsUtil(int node, vector<int> adj[], vector<int>& vis, vector<int>& result) {
    vis[node] = 1;
    result.push_back(node);

    // Traverse neighbours
    for (int i = 0; i < adj[node].size(); i++) {
        int neighbour = adj[node][i];
        if (!vis[neighbour]) {
            dfsUtil(neighbour, adj, vis, result);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> vis(V, 0);
    int start = 0;
    vector<int> result;
    dfsUtil(start, adj, vis, result);
    return result;
}

int main() {
    int V = 5;
    vector<int> adj[V];

    // Example graph
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    vector<int> result = dfsOfGraph(V, adj);

    // Print DFS traversal
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}