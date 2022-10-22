class Solution {
    vector<vector<int>> ans;
public:
    void backtrack(int n, int k, int start, vector<int> &subans){
        if(k==subans.size()) {
            ans.push_back(subans);
            return;
        }
        for(int i = start; i <= n; i++){
            subans.push_back(i);
            backtrack(n, k, i+1, subans);
            subans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subans;
        backtrack(n, k, 1, subans);
        return ans;
    }
};