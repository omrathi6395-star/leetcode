class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.length() > s.length())
            return ans;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        // Frequency of p
        for (char c : p) {
            need[c - 'a']++;
        }

        int k = p.length();

        // First window
        for (int i = 0; i < k; i++) {
            window[s[i] - 'a']++;
        }

        // Check first window
        if (window == need) {
            ans.push_back(0);
        }

        // Sliding window
        for (int i = k; i < s.length(); i++) {

            // Add new character
            window[s[i] - 'a']++;

            // Remove old character
            window[s[i - k] - 'a']--;

            // Check anagram
            if (window == need) {
                ans.push_back(i - k + 1);
            }
        }

        return ans;
    }
};