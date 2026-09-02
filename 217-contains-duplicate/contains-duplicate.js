/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
  if(nums.length === 0){ return; }
  const hasSet = new Set();
  const len = nums.length;
  
  for(let i = 0; i < len; i++){
    if (!hasSet.has(nums[i])){
      hasSet.add(nums[i]);
    }else{
      return true;
    }
  }
  return false;
};
