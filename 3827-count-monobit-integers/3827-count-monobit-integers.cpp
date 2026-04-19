#include <cmath>
class Solution {
public:
    int countMonobit(int n) {
        int count=1;
        int k=1;
        while(true)
            {
                int monobit=pow(2,k)-1;
                if(monobit>n)break;
                count++;
                k++;
            
            }
        return count;
        
    }
};