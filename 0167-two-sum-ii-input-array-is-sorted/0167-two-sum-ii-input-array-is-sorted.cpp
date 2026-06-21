class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        vector<int> v;
        while(l<r)
        {
            int sum=numbers[l]+numbers[r];
            if (sum==target)
            {
                v.push_back(l+1);
                v.push_back(r+1);
                return v;
            }
            else if (sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return v;
    }
};