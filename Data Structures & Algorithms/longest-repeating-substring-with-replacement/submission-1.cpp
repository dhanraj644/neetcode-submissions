class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char,int>mp;

        int left=0;
        int maxFrequency=0;
        int windowSize=0;


        for(int right=0; right<s.size(); right++)
        {
            mp[s[right]]++;

            maxFrequency= max(maxFrequency,mp[s[right]]);
            int windowlength=right-left+1;

            if(windowlength -maxFrequency >k )
            {
                mp[s[left]]--;
                left++;
            }

            windowlength=right-left+1;

            windowSize = max(windowSize,windowlength);

        }

        return windowSize;
    }
};
