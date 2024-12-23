/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function(nums1, nums2) {
  let size = nums1.length;
  let ans = new Array(size);
  ans.fill(-1);
  let x = 0;
  for (let i = 0; i < size; i++) {
    x = nums2.findIndex((val) => val === nums1[i]);
    while (nums2[x] != undefined) {
      if (nums1[i] < nums2[x]) {
        ans[i] = nums2[x];
        break;
      }
      x++;
    }
  }
  return ans;
};