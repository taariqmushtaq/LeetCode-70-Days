class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        size_t size = nums.size();
        int sum =0;
        vector<int> indexes;

        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                sum = nums[i]+nums[j];
                if(sum == target)
                {
                    indexes = {i,j};
                }
            }

        }
        return indexes;
    }
};
