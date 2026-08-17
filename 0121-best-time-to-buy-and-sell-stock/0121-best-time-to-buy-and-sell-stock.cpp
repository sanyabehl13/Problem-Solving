class Solution {
public:
    int maxProfit(vector<int>& prices) {
int buy=prices[0];
int profit=0;
for(int i=1;i<prices.size();i++)
{
    profit=max(profit, prices[i]-buy);
    buy=min(buy,prices[i]);
}
return profit;


          }
};
      /*  int n=prices.size();
        int buy= *min_element(prices.begin(),prices.end());
        int i=find(prices.begin(),prices.end(),buy)-prices.begin();
        //for(i=i+1i<n)
        int sell=0;
        if(i<n-1){
        sell= *max_element(prices.begin()+i+1,prices.end());}
        
        if(sell>buy && sell!=0){
            return sell-buy;
        }
        else
        return 0;......................mistake
        [2, 4, 1]Answer should actually be:

4 - 2 = 2

So the problem is that the best buying day isn't necessarily the overall minimum.The proper simple solution

Since you're learning sliding window / array techniques, think of it like this:

At every day:

"What's the cheapest price I've seen BEFORE today?"

Then calculate today's profit.*/
  