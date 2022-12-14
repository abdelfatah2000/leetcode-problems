class Solution {
    vector<vector<int>> res;
public:
    void backtrack (vector<int> nums, int start){
        if(start == nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i = start; i < nums.size(); i++){
            if(start != i && nums[i] == nums[start]) continue;
            swap(nums[i], nums[start]);
            backtrack(nums, start+1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(nums, 0);
        return res;
    }
};