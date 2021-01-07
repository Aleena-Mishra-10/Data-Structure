class Solution {
public:
    vector<vector<int>> res;
    vector<int> paths;
    void bt(int v,vector<vector<int>> &graph){
        if(v==graph.size()-1){
            res.push_back(paths);
            return;
        }
        if(graph[v].empty()) return;
        for(int i=0;i<graph[v].size();i++){
            paths.push_back(graph[v][i]);
            bt(graph[v][i],graph);
            paths.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        paths.push_back(0);
        bt(0,graph);
        return res;
    }
};
