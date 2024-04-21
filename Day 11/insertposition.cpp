#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int index = 0;
        bool flag = false;

        if (nums.size() <= 0)
        {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                index = i;
                return index;
                break;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (target > nums[i] && target < nums[i + 1])
            {
                index = i + 1;
                return index;
            }
            else if (target < nums[i])
            {
                index = 0;
                return index;
            }
            else if (target > nums[i])
            {
                index = nums.size();
                return index;
            }
        }
        return index;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 3, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int target = 5;
    int index = solution.searchInsert(nums, target);
    cout << "Insert position for target " << target << " is: " << index << endl;

    target = 2;
    index = solution.searchInsert(nums, target);
    cout << "Insert position for target " << target << " is: " << index << endl;

    target = 7;
    index = solution.searchInsert(nums, target);
    cout << "Insert position for target " << target << " is: " << index << endl;

    target = 0;
    index = solution.searchInsert(nums, target);
    cout << "Insert position for target " << target << " is: " << index << endl;

    return 0;
}