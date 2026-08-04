class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1){
            return x;
        }
        int left=1;
        int right=x/2;
        long long mid;
        long long sqrt;
        int ans=0;
        while(left<=right){
            mid=left+(right-left)/2;
            sqrt=mid*mid;
            if(sqrt==x){
                return mid;
            }
            else if(sqrt<x){
                ans=mid;
                left=mid+1;

            }else{
                right=mid-1;
            }
        }
    return ans;
}
};