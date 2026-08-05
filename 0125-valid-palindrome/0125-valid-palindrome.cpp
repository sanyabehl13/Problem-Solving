class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;

        while (l < r) {

            while (l < r && !isalnum(s[l]))
                l++;

            while (l < r && !isalnum(s[r]))
                r--;

            if (tolower(s[l]) != tolower(s[r]))
                return false;

            l++;
            r--;
        }

        return true;
    }
};/*class Solution {
public:
    bool isPalindrome(string s) {

        int l = 0;
        int r = s.length() - 1;

        while (l < r) {

            // Skip non-alphanumeric from left
            while (l < r &&
                  !((s[l] >= 'A' && s[l] <= 'Z') ||
                    (s[l] >= 'a' && s[l] <= 'z') ||
                    (s[l] >= '0' && s[l] <= '9')))
            {
                l++;
            }

            // Skip non-alphanumeric from right
            while (l < r &&
                  !((s[r] >= 'A' && s[r] <= 'Z') ||
                    (s[r] >= 'a' && s[r] <= 'z') ||
                    (s[r] >= '0' && s[r] <= '9')))
            {
                r--;
            }

            // Convert to lowercase
            if (s[l] >= 'A' && s[l] <= 'Z')
                s[l] += 32;

            if (s[r] >= 'A' && s[r] <= 'Z')
                s[r] += 32;

            // Compare
            if (s[l] != s[r])
                return false;

            l++;
            r--;
        }

        return true;
    }
};*/