/*
Kosaraju-Sharir algorithm requires two passes of DFS to find the SCC (strongly connected components) i.e., it finds the SCC in O(V + E).

These are the steps of the algorithm:

1. Compute the reverse graph GR, 
   such that there is an edge from u to v in GR if and only if there is an edge from v to u in the original graph G.
   
2. Run DFS over GR and compute the order in which vertices finish expansion. 
   Run DFS over G in the reverse of the order computed in step 2.
   
3. All vertices that are discovered during the expansion of a vertex v belong in the same SCC as v.
*/


typedef v(v(p(int, int))) Graph;

void topologicalSorting(int u, Graph &rg, stack < int > &ts, bitset < SIZE > &vis) {
	vis[u] = true;
	rep(i, 0, int(rg[u].size()) - 1) {
		int v = rg[u][i].first;
		if(!vis[v])
			topologicalSorting(v, rg, ts, vis);
	}
	ts.push(u);
}

void exploreComponent(int u, v(int) &cur_scc, Graph &g, bitset < SIZE > &vis) {
	vis[u] = true;
	cur_scc.push_back(u);
	rep(i, 0, int(g[u].size()) - 1) {
		int v = g[u][i].first;
		if(!vis[v])
			exploreComponent(v, cur_scc, g, vis);
	}
}

void printSCC(v(v(int)) scc) {
	rep(i, 0, scc.size() - 1) {
		cout << i + 1 << "). ";
		rep(j, 0, scc[i].size() - 1) {
			cout << scc[i][j] << " ";
		}
		cout << "\n";
	}
}

void kosarajuSCC(Graph &g, int m)
{
	int n = g.size();
	Graph rg;
	rg.resize(n);

	//Compute reverse graph
	rep(i, 0, n - 1) {
		rep(j, 0, int(g[i].size()) - 1) {
			rg[g[i][j].first].push_back({i, 0});
		}
	}

	bitset < SIZE > vis;
	vis.reset();
	stack < int > ts;
	rep(i, 0, n - 1) {
		if(!vis[i])
			topologicalSorting(i, rg, ts, vis);
	}

	v(v(int)) scc;
	vis.reset();
	while(!ts.empty()) {
		int i = ts.top();
		ts.pop();
		v(int) cur_scc;
		if(!vis[i]) {
			exploreComponent(i, cur_scc, g, vis);
			scc.push_back(cur_scc);
		}
	}
	printSCC(scc);
}

int main() {
	// freopen("in.txt", "r", stdin);
 	// freopen("out1.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    
    Graph g;
    g.resize(n);

    rep(i, 0, m - 1) {
    	int u, v;
    	cin >> u >> v;
    	u--;
    	v--;
    	g[u].push_back({v, 0});
    } 
    kosarajuSCC(g, m);
	
}
