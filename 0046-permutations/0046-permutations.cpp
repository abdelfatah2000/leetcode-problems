class Solution {
    vector<vector<int>> res;
public:
    void backtrack(vector<int>& nums, vector<int>& soln){
        if(soln.size() == nums.size()){
            res.push_back(soln);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if(find(soln.begin(), soln.end(), x) != soln.end()) continue;
            soln.push_back(nums[i]);
            backtrack(nums, soln);
            soln.pop_back();
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>soln;
        backtrack(nums, soln);
        return res;
    }
};