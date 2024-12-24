/**
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElements = function(nums) {
    const size = nums.length;
    let st = [];
    let ans = new Array(size);
    for (let i = size * 2 - 1; i >= 0; i--) {
        while (st.length > 0 && st[st.length - 1] <= nums[i % size]) {
            st.pop();
        }
        if (i < size) {
            ans[i] = st.length > 0 ? st[st.length - 1] : -1 ;
        }
        st.push(nums[i % size]);
    }
    return ans;
};