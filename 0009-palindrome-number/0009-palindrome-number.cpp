class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int org = x;
        while (x > 0) {
            int n = x % 10;
            if (rev < INT_MIN / 10 || rev > INT_MAX / 10) {
                return 0;
            }
            rev = (rev * 10) + n;
            x = x / 10;
        }
        if(org==rev){
            return true;
        }else{
            return false;
        }
        
    }
};