class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        for(j=0;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                swap(nums[i],nums[j]);
            }
        }
    int k=i+1;
        return k;
    }
};