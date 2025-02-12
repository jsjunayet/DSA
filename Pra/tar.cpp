#include <bits/stdc++.h>
using namespace std;

class TarjanSCC {
public:
    int n, timer;
    vector<vector<int>> adj;
    vector<int> disc, low, inStack;
    stack<int> st;
    vector<vector<int>> sccs;

    TarjanSCC(int n) {
        this->n = n;
        adj.resize(n + 1);
        disc.assign(n + 1, -1);
        low.assign(n + 1, -1);
        inStack.assign(n + 1, 0);
        timer = 0;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void dfs(int u) {
        disc[u] = low[u] = timer++;
        st.push(u);
        inStack[u] = 1;

        for (int v : adj[u]) {
            if (disc[v] == -1) {
                dfs(v);
                low[u] = min(low[u], low[v]);
            } else if (inStack[v]) {
                low[u] = min(low[u], disc[v]);
            }
        }

        if (disc[u] == low[u]) {
            vector<int> scc;
            while (true) {
                int v = st.top();
                st.pop();
                inStack[v] = 0;
                scc.push_back(v);
                if (v == u) break;
            }
            sccs.push_back(scc);
        }
    }

    void findSCCs() {
        for (int i = 1; i <= n; i++) {
            if (disc[i] == -1)
                dfs(i);
        }

        cout << "Strongly Connected Components (SCCs):\n";
        for (auto &scc : sccs) {
            for (int v : scc)
                cout << v << " ";
            cout << "\n";
        }
    }
};

int main() {
    int n, e;
    cin >> n >> e;

    TarjanSCC graph(n);

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    graph.findSCCs();

    return 0;
}

// 5 5
// 1 2
// 2 3
// 3 1
// 3 4
// 4 5

// Strongly Connected Components (SCCs):
// 1 3 2
// 4
// 5
//  "hello world"