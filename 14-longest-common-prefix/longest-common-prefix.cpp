#include <string>
#include <vector>
class Solution {
public:
    int shortestString(string* p, int strLen){ 
        int min = p[0].length(), index = 0; 
        for (int i= 1; i<  strLen ; i++)
        {
            if (p[i].length() < min)
            {
                min = p[i].length();;
                index = i;
            }
        }
        return index;
    }

    string longestCommonPrefix(vector<string>& strs) {
        int shortestIndex = shortestString(&strs[0], strs.size());
        string result;
        bool check = false;

        for (int j = 0; j < strs[shortestIndex].length(); j++)
        {
            //outside first
            for (int i = 0; i < strs.size(); i++)
            {
                if (strs[i][j] == strs[shortestIndex][j])
                {
                    check = true;
                }
                else
                {
                    check = false;
                }
                if (check == false)
                {
                    break;
                }
            }
            if (check == true)
                {
                    result.push_back(strs[shortestIndex][j]);
                }
            if (check == false)
            {
                break;
            }
        }
        return result;
    }
};