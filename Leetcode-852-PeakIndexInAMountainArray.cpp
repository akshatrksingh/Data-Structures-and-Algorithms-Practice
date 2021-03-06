class Solution 
{
    public:
        int findPeakElement(vector<int> &nums)
        {
            int n = nums.size();
            int lb = 1 , mid, ub = n-2;
            while(lb <= ub)
            {
                mid = lb + (ub-lb)/2;
                if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1])
                {
                    return mid;
                }
                else if(nums[mid-1] < nums[mid])
                {
                    lb = mid+1;
                }
                else
                {
                    ub = mid-1;
                }
            }            
            return -1;
        }
};
