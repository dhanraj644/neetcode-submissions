class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mp;

        int r=0;
        int res=0;

        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                r= max(mp[s[i]]+1,r);
            }

            mp[s[i]]=i;
            res=max(res,i-r+1);
        }

        return res;
    }
};
