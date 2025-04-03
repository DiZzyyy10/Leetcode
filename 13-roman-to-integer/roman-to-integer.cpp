class Solution {
public:

    int valueFinder(char c){
            switch (c){
                case 'I':  return 1;
                case 'V':  return 5;
                case 'X':  return 10;
                case 'L':  return 50;
                case 'C':  return 100;
                case 'D':  return 500;
                case 'M':  return 1000;
                default: return 0;
            }
        }

    int romanToInt(string s) {
        //get the string length
        int stringLenght = s.length();
        //sum
        int sum = 0;

        //declare function to find the value
        
        //for-loop for the string then add
        for(int i = 0; i < stringLenght; i++){
            if((s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X'))
            || (s[i] == 'X' && (s[i+1] == 'L'  || s[i+1] == 'C'))
            || (s[i] == 'C' && (s[i+1] == 'D'  || s[i+1] == 'M')))
            {
                sum += valueFinder(s[i+1]) - valueFinder(s[i]);
                i++;
            }
            else
            {
                sum += valueFinder(s[i]);
            }
        }
        return sum;
    }
};