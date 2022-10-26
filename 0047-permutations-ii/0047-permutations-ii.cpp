class Solution {
    vector<vector<int>> res;
public:
    void backtrack (vector<int>& nums, int start){
        bool x = find(res.begin(), res.end(), nums) != res.end();
        if(start == nums.size() && x == false){
            res.push_back(nums);
            return;
        }
        for(int i = start; i < nums.size(); i++){
            swap(nums[start], nums[i]);
            backtrack(nums, start+1);
            swap(nums[start], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(nums, 0);
        return res;
    }
};