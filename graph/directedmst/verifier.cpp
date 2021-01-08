#include <iostream>
#include <set>
#include <utility>
#include "testlib.h"
#include "params.h"
#include <queue>

using namespace std;

int main() {
    registerValidation();

    int n = inf.readInt(1, N_MAX);
    inf.readSpace();
    int m = inf.readInt(n - 1, N_MAX);
    inf.readSpace();
    int s = inf.readInt(0, n - 1);
    inf.readChar('\n');

    using P = pair<int, int>;
    set<P> st;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int a = inf.readInt(0, n - 1);
        inf.readSpace();
        int b = inf.readInt(0, n - 1);
        inf.readSpace();
        inf.readInt(0, C_MAX);
        inf.readChar('\n');

        g[a].push_back(b);

        ensure(!st.count({a, b}));
        st.insert({a, b});
        ensure(a != b);
    }
    inf.readEof();

    queue<int> q;
    vector<bool> visited(n);
    q.push(s);
    while (!q.empty()) {
        int i = q.front(); q.pop();
        if (visited[i]) continue;
        visited[i] = true;
        for (int j: g[i]) {
            q.push(j);
        }
    }
    for (int i = 0; i < n; i++) {
        ensure(visited[i]);
    }
    return 0;
}
