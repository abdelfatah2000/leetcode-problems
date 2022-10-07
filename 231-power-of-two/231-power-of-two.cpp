class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return((n&(n-1))==0);
    }
};

// int long long sum=1;
// while(sum < n){
//     sum = sum * 2;
// }
// if(sum == n) return true;
// return false;
