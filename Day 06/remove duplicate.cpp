
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // If the vector is empty, return 0
        
        int k = 1; // Initialize the unique elements count to 1 since nums[0] is always unique
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[k++] = nums[i]; // If current element is different from the previous one, move it to the next unique position
            }
        }
        
        return k; // Return the count of unique elements
    }
};