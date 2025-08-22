class Solution {
public:
    int reverse(int x) {
        int num = 0;
 
        while(x!=0){
          int lastdigit = x%10;
          // Check overflow/underflow before num = num*10 + digit
          if(num > INT_MAX/10 || (num == INT_MAX && lastdigit > 7) )return 0;
          if(num < INT_MIN/10 || (num == INT_MIN && lastdigit < -8) )return 0;
          num = (num*10)+lastdigit;
          x=x/10;
        }
       
       return num;
    }
};
