class Solution {
public:
    bool isPowerOfTwo(int n) {
        int long long sum=1;
        while(sum < n){
            sum = sum * 2;
        }
        if(sum == n) return true;
        return false;
        
    }
};