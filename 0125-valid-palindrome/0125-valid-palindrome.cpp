class Solution {
public:
    bool isPalindrome(string s) {
        char c;
        int n=s.length();
        int i;
        for (i=0;i<s.length();i++)///as not a copy so n changes length after erase
        {
            c=s[i];
            if(s[i]>=65 && s[i]<=90) //use s[i] to make actual changes
            {
                s[i]=s[i]+32;
            }
            if(!(s[i] >=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57))
            {
                s.erase(i,1); //del 1 ch at i index
                i--;

            }
        }
       int l=0, r=s.length()-1;
       while(l<=r)
       {
        if(s[l]!=s[r])
        //return true;
        return false;
        else
        l++;
        r--;
       } 
       return true;
    }
};