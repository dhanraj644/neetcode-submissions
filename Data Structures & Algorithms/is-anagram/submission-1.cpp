class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
        unordered_map<int,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }

        for(auto x : t)
        {
            if(mp.find(x) != mp.end())
            {
                if(mp[x] >0)
                {
                mp[x]--;

                }
               else
               {
                return false;
               }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
