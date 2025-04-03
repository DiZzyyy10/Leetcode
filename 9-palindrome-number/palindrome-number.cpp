class Solution {
public:
    bool isPalindrome(int x) {
        string tempString = to_string(x);
        int stringSize = tempString.length();
        if ((stringSize % 2) == 0)
        {
            //size is even
            for (int k = 0; k < stringSize/2 ; k++)
            {
                cout << "stringSize/2 = " << stringSize/2 << endl;
                if((tempString[k] == tempString[stringSize-k-1]) == 0)//if both strings are not equal return false
                return false;
            }
            return true;
        }
        else // stringSize % 2 == 1
        {
            //size is odd
            for (int i = 0; i <= stringSize/2 ; i++)
            {
                if((tempString[i] == tempString[stringSize-i-1]) == 0)//if both strings are not equal return false
                return false;
            }
            return true;
        }
    }
};