class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int breakpoint = -1;
        int n = nums.size();
        // traversing from the back to find a breakpoint
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i + 1] > nums[i])
            {
                breakpoint = i;
                break;
            }
        }
        // if no breakpoint
        if (breakpoint == -1)
        {
            reverse(nums.begin(), nums.end());
            return ;
        }
        // if found a breakpoint
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[breakpoint])
            {
                swap(nums[breakpoint] ,nums[i] );
                reverse(nums.begin() + breakpoint + 1, nums.end());
                break;
            }
        }
          
    }
};