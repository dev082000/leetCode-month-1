class Solution {
public:
    int fib(int n) {
      int a=0;
      int b=1;
      int sum;
      if(n==0)
      cout<<a;
      if(n==1)
      cout<<b;
      for(int i=0;i<n;i++)
      {
       sum=a+b;
        a=b;
        b=sum;
      }
      return a;     
    }
};