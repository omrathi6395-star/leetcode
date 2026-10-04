class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, j = 0;
        string ans;

        while (j < chars.size()) {
            if (chars[j] != chars[i]) {
                ans += chars[i];

                if (j - i > 1) {
                    ans += to_string(j - i);
                }

                i = j;   // if ke bahar
            }

            j++;
        }

        // Last group
        ans += chars[i];

        if (j - i > 1) {
            ans += to_string(j - i);
        }

        // ans ko chars ke andar copy
        int k = 0;

        for (char c : ans) {
            chars[k] = c;
            k++;
        }

        return k;
    }
};