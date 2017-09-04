/*
Kosaraju-Sharir algorithm requires two passes of DFS to find the SCC (strongly connected components) i.e., it finds the SCC in O(V + E).

These are the steps of the algorithm:

1. Compute the reverse graph GR, 
   such that there is an edge from u to v in GR if and only if there is an edge from v to u in the original graph G.
   
2. Run DFS over GR and compute the order in which vertices finish expansion. 
   Run DFS over G in the reverse of the order computed in step 2.
   
3. All vertices that are discovered during the expansion of a vertex v belong in the same SCC as v.
*/
