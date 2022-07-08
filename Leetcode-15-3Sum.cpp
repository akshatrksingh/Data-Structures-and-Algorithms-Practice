class Solution 
{
    public:
        vector<vector<int>> threeSum(vector<int> &nums) 
        {
            int n = nums.size();
            vector<vector<int>> ans;
            sort(nums.begin(), nums.end());
            for(int i = 0; i < n; i++)
            {
                int left = i+1, right = n-1;
                if (i > 0 && nums[i] == nums[i - 1])
                        continue;
                while(left < right)
                {
                    if(nums[i] + nums[left] + nums[right] == 0)
                    {
                        ans.push_back({nums[i], nums[left], nums[right]});
                        while(left < right && nums[right] == nums[right-1]) 
                            right--;
                        while(left < right && nums[left] == nums[left+1]) 
                            left++;
                        left++;
                        right--;
                    }
                    else if(nums[i] + nums[left] + nums[right] > 0)
                    {
                        right--;
                    }
                    else
                    {
                        left++;
                    }
                }
            }
            return ans;
        }
};
