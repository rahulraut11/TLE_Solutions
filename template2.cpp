#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long
#define test(t) for (int i_025 = 0; i_025 < t; i_025++)
#define bit(x, i) (x & (1 << i))
#define remax(a, b) (a) = max((a), (b))
#define remin(a, b) (a) = min((a), (b))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define clr(a, x) memset(a, x, sizeof(a)) // set to a
typedef vector<int> vi;
typedef vector<vi> vvi;
#define INF 1001001001
#define PI 3.1415926535897932384626
#define MOD (int)(1e9 + 7)

// --- Searching Algorithms ---
int linearsearch(vector<int> &A, int target)
{
    for (int i = 0; i < A.size(); ++i)
        if (A[i] == target)
            return i;
    return -1;
}

int binarysearch(vector<int> &A, int l, int r, int target)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int binarySearchUpperBound(vector<int> &A, int left, int right, int target)
{
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (A[mid] >= target)
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return ans;
}

int bsearchlower(vector<int> &A, int left, int right, int target)
{
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (A[mid] <= target)
        {
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return ans;
}

// --- Graph Algorithms ---
vector<vector<int>> adj;
vector<bool> visited;

// DFS for Graph/Tree
void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

// BFS for Graph/Tree
void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// Find connected components in an undirected graph
int connected_components(int n)
{
    visited.assign(n, false);
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            dfs(i);
            cnt++;
        }
    }
    return cnt;
}

// Dijkstra's algorithm for shortest path from source
vector<ll> dijkstra(int src, int n)
{
    vector<ll> dist(n, LLONG_MAX);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty())
    {
        ll d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (d > dist[u])
            continue;
        for (int v : adj[u])
        {
            if (dist[v] > dist[u] + 1)
            { // Assuming all weights = 1; change if needed
                dist[v] = dist[u] + 1;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

// --- Tree Algorithms ---
// LCA with Binary Lifting (assumes 0-based indexing)
const int LOG = 20;
vector<vector<int>> up;
vector<int> depth;

void dfs_lca(int u, int p)
{
    up[u][0] = p;
    for (int i = 1; i < LOG; ++i)
        up[u][i] = up[up[u][i - 1]][i - 1];
    for (int v : adj[u])
    {
        if (v != p)
        {
            depth[v] = depth[u] + 1;
            dfs_lca(v, u);
        }
    }
}

int lca(int u, int v)
{
    if (depth[u] < depth[v])
        swap(u, v);
    for (int i = LOG - 1; i >= 0; --i)
        if (depth[u] - (1 << i) >= depth[v])
            u = up[u][i];
    if (u == v)
        return u;
    for (int i = LOG - 1; i >= 0; --i)
        if (up[u][i] != up[v][i])
        {
            u = up[u][i];
            v = up[v][i];
        }
    return up[u][0];
}

// --- Disjoint Set Union (Union-Find) ---
struct DSU
{
    vi parent, rank;
    DSU(int n)
    {
        parent.resize(n);
        rank.assign(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }
    int find(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }
    void unite(int x, int y)
    {
        x = find(x), y = find(y);
        if (x == y)
            return;
        if (rank[x] < rank[y])
            swap(x, y);
        parent[y] = x;
        if (rank[x] == rank[y])
            rank[x]++;
    }
};

// --- Segment Tree (Range Sum Query Example) ---
struct SegmentTree
{
    int n;
    vector<ll> tree;
    SegmentTree(int sz)
    {
        n = sz;
        tree.assign(4 * n, 0);
    }
    void build(vector<int> &A, int v, int tl, int tr)
    {
        if (tl == tr)
            tree[v] = A[tl];
        else
        {
            int tm = (tl + tr) / 2;
            build(A, v * 2, tl, tm);
            build(A, v * 2 + 1, tm + 1, tr);
            tree[v] = tree[v * 2] + tree[v * 2 + 1];
        }
    }
    ll sum(int v, int tl, int tr, int l, int r)
    {
        if (l > r)
            return 0;
        if (l == tl && r == tr)
            return tree[v];
        int tm = (tl + tr) / 2;
        return sum(v * 2, tl, tm, l, min(r, tm)) + sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
    }
    void update(int v, int tl, int tr, int pos, int new_val)
    {
        if (tl == tr)
            tree[v] = new_val;
        else
        {
            int tm = (tl + tr) / 2;
            if (pos <= tm)
                update(v * 2, tl, tm, pos, new_val);
            else
                update(v * 2 + 1, tm + 1, tr, pos, new_val);
            tree[v] = tree[v * 2] + tree[v * 2 + 1];
        }
    }
};

// --- korosu 殺す ---
void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}