class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>x(26,0);
        for(int i=0;i<s.size();i++)
        {
            x[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            x[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(x[i]!=0)
            {
                return 0;
            }
        }
        return true;
        
    }
};