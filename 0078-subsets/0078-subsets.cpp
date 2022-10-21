class Solution {
    vector<vector<int>> ans;
public:
    void backtrack(vector<int> &nums, int start, vector<int> subans){
        ans.push_back(subans);
        for(int i = start; i < nums.size(); i++){
            subans.push_back(nums[i]);
            backtrack(nums, i+1, subans);
            subans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subans;
        backtrack(nums, 0, subans);
        return ans;

    }
};


// if(nums.empty()) return {{}};
//         int n = nums.back();
//         nums.pop_back();
//         vector<vector<int>> ans = subsets(nums);
//         int size = ans.size(); 
//         for(int i = 0; i < size; i++){
//             ans.push_back(ans[i]);
//             ans.back().push_back(n);
//         }
//         return ans;