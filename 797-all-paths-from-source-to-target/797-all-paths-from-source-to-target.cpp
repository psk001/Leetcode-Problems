class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> temp;
        dfs(graph, res, temp, 0);
        return res;
    }
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& res, vector<int> temp, int curr){
        temp.push_back(curr);
        
        if(curr==graph.size()-1)
            res.push_back(temp);
        else
            for(auto i: graph[curr])
                dfs(graph, res, temp, i);
        
        temp.pop_back();
        
    }
};



// class Solution {
// public:
//     // setting a few class variables, so that we do not have to pass them down all the time in the recursive dfs calls
//     int target;
//     vector<vector<int>> res;
//     vector<int> tmp;
//     void dfs(vector<vector<int>>& graph, int currNode = 0) {
// 	    // updating tmp
//         tmp.push_back(currNode);
// 		// and either updating res with it if target is met
//         if (currNode == target) res.push_back(tmp);
// 		// or callling dfs again recursively
//         else for (int node: graph[currNode]) {
//             dfs(graph, node);
//         }
//         // backtracking with tmp
// 		tmp.pop_back();
//     }
//     vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
//         target = graph.size() - 1;
//         dfs(graph);
//         return res;
//     }
// };