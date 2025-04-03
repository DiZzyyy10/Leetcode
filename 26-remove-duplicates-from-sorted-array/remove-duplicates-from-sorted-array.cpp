class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        // j is the index of the last unique element.
        int j = 0;
        // Start i from 1 since the first element is always unique.
        for (int i = 1; i < nums.size(); i++) {
            // If the current element is different from the last unique element,
            // it is a new unique element.
            if (nums[i] != nums[j]) {
                j++;              // Move the unique pointer forward.
                nums[j] = nums[i]; // Update with the new unique element.
            }
        }
        // j+1 is the count of unique elements.
        return j + 1;
    }
};