class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int right, left = 0;
        unordered_set<char> charSet;
        int maxLen = 0;
        for(right = 0; right < s.length(); right++)
        {
            if(charSet.count(s[right]) == 0)
            {
                charSet.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
            }
            else
            {
                while(charSet.count(s[right]) ==1)
                {
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
        }
        return maxLen;
    }
};