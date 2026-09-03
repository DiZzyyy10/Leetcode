/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  const map = new Map();

  for (let i = 0; i < nums.length; i++) {
    const tmpNum = target - nums[i];
    if (!map.has(tmpNum)) {
      map.set(nums[i], i);
    } else {
      return [i, map.get(tmpNum)];
    }
  }
};
