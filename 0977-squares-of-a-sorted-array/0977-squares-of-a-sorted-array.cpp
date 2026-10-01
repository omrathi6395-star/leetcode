class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int>ans(a.size());
        int i=0,j=a.size()-1,l=a.size()-1;
        while(i<=j)
        {
           if((a[i]*a[i])>(a[j]*a[j]))
           {
            ans[l]=a[i]*a[i];
           i++;
           l--;
           }
           else
           {
            ans[l]=a[j]*a[j];
            j--;
            l--;
           }

        }
        return ans;
    }
};