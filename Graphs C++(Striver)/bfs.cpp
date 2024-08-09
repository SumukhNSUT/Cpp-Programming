#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(int V, vector<int> adj[]) {
    // visited array
    vector<int> vis(V, 0);  // Initialize all elements with 0
    // starting node will have 1
    vis[0] = 1;

    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        // // check for neighbour nodes
        // for (auto it : adj[node]) {
        //     if (!vis[it]) {
        //         vis[it] = 1;
        //         q.push(it);
        //     }
        // }

        // check for neighbour nodes using a traditional for loop
        for (int i = 0; i < adj[node].size(); i++) {
            int neighbor = adj[node][i];
            if (!vis[neighbor]) {
                vis[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
    return bfs; // return bfs after the entire traversal
}

int main() {
    int V = 5;
    vector<int> adj[V];

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    vector<int> result = bfs(V, adj);

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}