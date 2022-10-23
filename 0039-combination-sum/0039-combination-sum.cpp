class Solution {
    vector<vector<int>> ans;
    void backtrack(vector<int>& candidates, int sum, int target, int start, vector<int>& track){
        if(sum > target) return;
        if(sum == target){
            ans.push_back(track);
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            sum+= candidates[i];
            track.push_back(candidates[i]);
            backtrack(candidates, sum, target, i, track);
            track.pop_back();
            sum -= candidates[i];
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> track;
        backtrack(candidates, 0, target, 0, track);
        return ans;
    }
};