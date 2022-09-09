class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        unordered_map <int,int> unmap;
        for(int i = 0; i < size; i++){
            unmap[nums[i]] = 1;
        }
        for(int j = 0; j <= size; j++){
            if(!unmap[j]) return j;
        }
        return 0;
    }
};