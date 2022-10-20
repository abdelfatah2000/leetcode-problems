class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.empty()) return {{}};
        int n = nums.back();
        nums.pop_back();
        vector<vector<int>> ans = subsets(nums);
        int size = ans.size(); 
        for(int i = 0; i < size; i++){
            ans.push_back(ans[i]);
            ans.back().push_back(n);
        }
        return ans;
    }
};