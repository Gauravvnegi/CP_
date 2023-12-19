
#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;
template <typename T>
class graph
{
    map<T, list<T>> l;

public:
    void add_edge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void dfs_h(T src, map<T, bool> &visited)
    {
        cout << src << " ";
        visited[src] = true;
        for (T nbr : l[src])
        {
            if (!visited[nbr])
            {

                dfs_h(nbr, visited);
            }
        }
    }
    void dfs(T src)
    {
        map<T, bool> visited;
        for (auto p : l)
        {
            T node = p.first;
            visited[node] = false;
        }
        dfs_h(src, visited);
    }
};
int main()
{
    graph<int> g;
    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(4, 5);

    g.dfs(5);
}

/*


 #include<bits/stdc++.h>
 using namespace std;
class Solution {
  public:

    vector<int>ans;
    vector<int >vis;
    void dfs(int node , vector<int> adj[]){
        ans.push_back(node);
        if(vis[node])return ;
        vis[node]=1;
        for(auto nbr : adj[node]){
            if(!vis[nbr]){
                dfs(nbr,adj);
            }
        }

    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {


    vis.resize(V,0);
    dfs(0,adj);
    return ans;

    }
};


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/