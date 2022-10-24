class Solution {
    vector<vector<int>> res;
    void backtrack(int k, int n, int start, int sum, vector<int>& track){
        if(sum > n) return;
        if(sum == n && track.size() == k){
            res.push_back(track);
            return;
        }
        for(int i = start; i < 10; i++){
            sum += i;
            track.push_back(i);
            backtrack(k, n, i+1, sum, track);
            sum -= i;
            track.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> track;
        backtrack(k, n, 1, 0, track);
        return res;
    }
};