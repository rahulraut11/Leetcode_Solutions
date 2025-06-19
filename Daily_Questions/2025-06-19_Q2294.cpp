class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int diff = 0;
        int count = 1;
        int n = nums.size();
        int minm = nums[0];
        for (int i = 0; i < n; i++)
        {
            diff = nums[i] - minm;
            if (diff <= k)
                continue;
            else
            {
                minm = nums[i];
                count++;
            }
        }
        return count;
    }
};