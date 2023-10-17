class Solution {
public:
    int hIndex(vector<int>& citations) {
         sort(citations.begin(), citations.end(), greater<>());
    int length = citations.size() - 1;
    int num;
    for (int i = length; i >= 0; i--) {
        num = citations[i];
        if (num >= i+1) return i+1;
        }
        return 0;
    }
};