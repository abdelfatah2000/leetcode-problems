class Solution {
    vector<vector<int>> ans;
    void backtrack(vector<int> &nums, int start, vector<int> &subans){
        bool x = find(ans.begin(), ans.end(), subans) != ans.end();
        if(!x){
         ans.push_back(subans);   
        }
        for(int i = start; i < nums.size(); i++){
            subans.push_back(nums[i]);
            backtrack(nums, i+1, subans);
            subans.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> subans;
        backtrack(nums, 0, subans);
        return ans;
    }
};