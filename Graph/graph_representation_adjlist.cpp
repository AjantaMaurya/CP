class Solution
{
public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>>l(V);
        
        
        for(int i = 0 ; i< edges.size(); i++)
        {
            //int node1 = edges[i].first;
            //int node2 = edges[i].second;
            l[edges[i].first].push_back(edges[i].second);
            l[edges[i].second].push_back(edges[i].first);
            
        }
        
        return l;
    }
};
