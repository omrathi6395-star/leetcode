class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int i=-1,j=0,ans=0,n=nums.size();
      while(j<n)
      {
        if(nums[j]==0)
        {
            i=j;
        }
        else{
            ans= max(ans,j-i);
        }
        
        j++;
      }
      return ans;
    }
};