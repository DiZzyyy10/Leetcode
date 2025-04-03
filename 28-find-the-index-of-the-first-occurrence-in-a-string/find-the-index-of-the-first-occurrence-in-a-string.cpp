class Solution {
public:
    int strStr(string haystack, string needle) {
        int j;
        if (needle.length() > haystack.length()) return -1;
        for (int i = 0; i <= (haystack.length()-needle.length()); i++)
        {
            if(needle[0] == haystack[i])
            {
                for (j = 0; j< needle.length(); j++)
                {
                    if(needle[j] != haystack[i+j])
                    {
                        break;
                    }
                }
                if (j == (needle.length()))
                {
                    return i;
                }
            }
        }
        return -1;
    }
};