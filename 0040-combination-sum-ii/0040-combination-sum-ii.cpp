class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int> candidates, int sum, int start, int target, vector<int>& track){
        if(sum > target) return;
        if(sum == target){
            res.push_back(track);
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            if(i != start && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            track.push_back(candidates[i]);
            sum += candidates[i];
            backtrack(candidates, sum, i+1, target, track);
            sum -= candidates[i];
            track.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> track;
        backtrack(candidates, 0, 0, target, track);
        return res;
    }
};