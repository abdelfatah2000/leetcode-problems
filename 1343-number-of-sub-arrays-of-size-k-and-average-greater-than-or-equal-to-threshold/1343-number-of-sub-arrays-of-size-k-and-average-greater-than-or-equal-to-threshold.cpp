class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        float avg = 0, max = 0;
        for(int i = 0; i < k; i++){
            max += arr[i];
        }
        avg = max/k;
        avg >= threshold ? count++ : 0;
        int curr = max;
        for (int j = k; j < arr.size(); j++){
            curr += arr[j];
            curr -= arr[j - k];
            avg = curr/k;
            avg >= threshold ? count++ : 0;
        }
        
        return count;
    }    
};