class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0, ans;
        for(int i = 0; i < k; i++){
            curr = curr + nums[i];
        }
        ans = curr;
        for(int j = k; j < nums.size();j++){
            curr = curr + (nums[j]) - (nums[j-k]);
            ans/k < curr/k ? ans = curr: 0;
        }
        return ans/k;
    }
};