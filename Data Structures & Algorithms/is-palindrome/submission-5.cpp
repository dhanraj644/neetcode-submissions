class Solution {
    private :

    bool isAlphaNum (char c)
    {
        return(c>='a' && c<='z'||c>='A'&&c<='Z'||c>='0' && c<='9');
    }
public:
    bool isPalindrome(string s) {
        
        string str="";

         for(char c :s)
         {
            if(isAlphaNum(c))
            {
                str+=tolower(c);
            }
         }

       return str ==string(str.rbegin(),str.rend());
    }
};
