class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            for (int k = i+1 ; k < nums.size() ; k++)
            {
                if(target == temp + nums[k])
                {
                    return {i, k};
                }
            }
        }
        //if we can't find anything just send an empty vector in 
        return {};
    }
};