class Solution {
public:
    int mySqrt(int x) {
        int long alt = x;
        while(alt*alt > x){
            alt = int(0.5*(alt + x/alt));
        }
        return alt;
    }
};