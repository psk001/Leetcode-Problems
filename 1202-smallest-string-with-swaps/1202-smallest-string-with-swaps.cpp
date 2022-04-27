class Solution {
    static const int size=100001;
    vector<int> adj[size];
    bool visited[size];
    
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        for(auto edge: pairs){
            int start=edge[0];
            int dest =edge[1];
            
            adj[start].push_back(dest);
            adj[dest].push_back(start);
        }
        
        
        for(int v=0; v<s.size(); v++){
            if(not visited[v]){
                vector<char> chars;
                vector<int> idx;
                
                dfs(s, v, chars, idx);
                
                sort(chars.begin(), chars.end());
                sort(idx.begin(), idx.end()); 
                
                for(int id=0; id<chars.size(); id++)
                    s[idx[id]]=chars[id];
                
            }
        }
        
        return s;
    }
    
    void dfs(string& s, int vertex, vector<char>& chars, vector<int>& idx){
        chars.push_back(s[vertex]);
        idx.push_back(vertex);
        
        visited[vertex]=true;
        
        
        for(int aj: adj[vertex]){
            if(not visited[aj])
                dfs(s, aj, chars, idx);
        }
        
    }
    
};