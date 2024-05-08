class Solution {
public:
void help(int i,vector<int>& nums,vector<int> & subset,vector<vector<int>> & ans)
{
 if(i==nums.size())
 {  
     ans.push_back(subset);
     return;
 }
 subset.push_back(nums[i]);
 help(i+1,nums,subset,ans);

 subset.pop_back();
 help(i+1,nums,subset,ans);
}
	vector<vector<int>> subsets(vector<int>& nums) {
		// Your code goes here
      vector<vector<int>> ans;
      vector<int> subset;
      help(0,nums,subset,ans);
      return ans;
	}
};
