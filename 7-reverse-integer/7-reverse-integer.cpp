class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN){
            return 0;
        }
        long a; 
        if(x<0){
           a = -1*x;
        }
        else{
           a= x;
        }
        long sum=0;
        while(a>0){
            long rem= a%10;
            sum=sum*10+rem;
            if(sum>INT_MAX){
                return 0;
            }
            a=a/10;
        }
        if(x<0){
            return -1*sum;
        }
        return sum;
    }
};