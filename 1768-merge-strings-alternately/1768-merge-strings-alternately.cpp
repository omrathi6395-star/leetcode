class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string ans;
        int i=0,j=0;
        bool flag=0;
        while(i<s1.size() && j<s2.size())
        {
            if(!flag)
            {
                flag=1;
                ans+=s1[i];
                i++;
            }
            else
            {
                ans+=s2[j];
                j++;
                flag=0;
            }
            
        }
       
       while(i<s1.size())
       {
        ans+=s1[i++];
       }

       while(j<s2.size())
       {
        ans+=s2[j++];
       }
       return ans;

    }
};