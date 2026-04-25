class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());//so that single loop is used O(nlogn)
//solvable by hash set
        for (int i = 1; i < nums.size(); i++) {
           //best to check contagious, adjacent elemts//
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};
/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num))
                return true;   // already saw this number before
            seen.insert(num);  // first time seeing it, store it
        }
        return false;
    }
};*/