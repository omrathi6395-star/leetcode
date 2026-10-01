class Solution {
public:
    string reverseVowels(string s) {
        string vowel;
        int k=0;

        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
            {
                vowel+=s[i];
            }
        }
         for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
            {
                s[i]=vowel[k];
                k++;
            }
        }
        return s;
    }
};