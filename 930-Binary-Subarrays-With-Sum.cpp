class Solution {
public:
    int fun(vector<int>& nums, int target) {
        if (target < 0)
            return 0;
        int res = 0, i = 0, n = nums.size();
        for (int j = 0; j < n; j++) {
            target -= nums[j];
            while (target < 0)
                target += nums[i++];
            res += j - i + 1;
        }
        return res;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // int i = 0, currSum = 0, start = 0, count = 0;
        // while(i < nums.size()){
        // currSum = nums[i];
        // start = i;
        // while(currSum <= goal && start < nums.size()){
        // if(currSum == goal){ count++;}
        // start++;
        // currSum += nums[start];
        // }
        // i++;
        //}
        // return count;
        return fun(nums, goal) - fun(nums, goal - 1);
    }
};