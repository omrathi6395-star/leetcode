class Solution {
public:
    string reverseWords(string s) {
        vector<string>a;
        string temp;
        int i=0;
        while(i<s.size() && s[i]==' ')
        {
            i++;
        }
        while(i<s.size())
        {
            while(i<s.size() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
         a.push_back(temp);
            temp="";
            while(i<s.size() && s[i]==' ')
            {
                i++;
            }
        }
        if(!temp.empty())
        {
         a.push_back(temp);

        }
        temp="";
        reverse(a.begin(), a.end());
        for(string q: a)
        {
            temp+=' ';
            temp+=q;
        }
        i=0;
        while(temp[i]==' ')
        {
            i++;
        }
         return temp.substr(1);

    }
};