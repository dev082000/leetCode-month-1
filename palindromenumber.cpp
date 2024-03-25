class Solution {
public:
    bool isPalindrome(int x) {
       unsigned int sum=0;
       int y=x;
        while(x>0)
        {
            int digit=x%10;
             sum=sum*10+digit;
            x=x/10;
        }
       
        if(sum==y)
        return 1;
        return 0;
    }
};