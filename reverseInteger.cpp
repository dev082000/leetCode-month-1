class Solution {
public:
    int reverse(int x) {
       bool is_negative=false;
       if(x<0)
       {
           is_negative=true;
           x=abs(x);
       }
         int digit;
        long sum=0;
        while(x>0)
        {
            digit=x%10;
            sum=sum*10+digit;
            x=x/10;
        }
          if((sum>INT_MAX) || (sum<INT_MIN))
        return 0;
        if(is_negative)
       { return (int)sum*-1;}
       else
       return (int)sum;
    }
};