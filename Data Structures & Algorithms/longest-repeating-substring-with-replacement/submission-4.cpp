class Solution {
public:
    int characterReplacement(string s, int k) {
        
     unordered_map<char,int>mp;   
    int maxFrequency=0;
    int maxwindowSize=0;
    int left=0;
    int maxLen=0;

    for(int right=0; right<s.size(); right++)
    {

        mp[s[right]]++;

        maxwindowSize=right-left+1;

        maxFrequency = max(maxFrequency,mp[s[right]]);

        if(maxwindowSize-maxFrequency > k)
        {
            mp[s[left]]--;
            left++;
        } 


        maxLen= max(maxLen,right-left+1);
    }   

    return maxLen;
    }
};
