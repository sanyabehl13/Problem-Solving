class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
        }
        double maxi=sum/k;
        for(int i=k;i<nums.size();i++)
        {
            sum=sum+nums[i];
            sum=sum-nums[i-k];
            double avg=sum/k;
            maxi=max(maxi,avg);


        }
        return maxi;

        /*double avg=0;
        double maxi=INT_MIN;//arr me negtive no.s bhi ho skte toh =0 is wrong
        
        double sum=0;//INT/INT=INT...FLOAT/INT=FLOAT
        int L=nums.size()-k;
        

        for(int i=0;i<=L;i++)

        {
            sum=accumulate(nums.begin()+i,nums.begin()+i+k,0);//last ele is exclusive
            avg=sum/k;
            maxi=max(avg,maxi);

        }
        
        return maxi;*/
    }
};