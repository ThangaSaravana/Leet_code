class Solution {
public:
    bool isPalindrome(int x) {
        
        int copy = x;

        int sum = 0 ;

        while(copy>0){
            int n = copy%10;

            if(sum>INT_MAX/10 || (sum == INT_MAX && n>7)){
                return 0;
            }
            if(sum<INT_MIN/10 || (sum == INT_MIN && n<-8)){
                return 0;
            }

            sum = sum*10 + n;
            copy = copy/10;
        }

        if(sum == x){
            return true;
        }else{
            return false;
        }


    }
};
