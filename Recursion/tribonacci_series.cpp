#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {

public:

  int fun(int ans , int n)
  {
    if(n<0)
    {
      return 1;
    }
    return fun(ans - 1, n - 1) + fun(ans-2, n - 1) + fun(ans-3, n - 1);
  }
public:
	int tribonacci(int n) {
		// Your code goes here
    if(n<3)
    {
      return n;
    }
    int ans = 1;
    return fun(ans, n-1);
  }
};


// **better approch**

class Solution {
public:
	int memoized(int n, vector<int> &dp){
        if(n < 2)           return n;
        if(n == 2)          return 1;
        if(dp[n] != -1)     return dp[n];
        return dp[n] = memoized(n-1, dp) + memoized(n-2, dp) + memoized(n-3, dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        return memoized(n, dp);
    }
};


int main()
{

  return 0;
}
