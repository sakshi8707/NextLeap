// **return arr with kth largest**

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      int n = nums.size();
      vector<int> ans;
      unordered_map<int, int> mp;

      // first, finding the freq of element in map

      for (int i = 0; i < n;i++)
      {
        mp[nums[i]]++;
      }

      priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>> >minHeap;

      for (auto it : mp)
      {

        minHeap.push({it.second,it.first});
        if(minHeap.size()> k)
        {
          minHeap.pop();
        }
      }
      //taking element of maxHeap till 'K'

      while(!minHeap.empty())
      {
        ans.push_back(minHeap.top().second);
        minHeap.pop();
      }
      reverse(ans.begin(), ans.end());
      return ans;      
    }
};

int main(){

  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  int k;
  cin >> k;
  Solution obj;
  vector<int> ans = obj.topKFrequent(arr,k);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}   