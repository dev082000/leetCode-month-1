class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n<=0)
      return false;
      int ans=(n&(n-1));
      if(ans==0)
      return true;
      return false;
    }
};