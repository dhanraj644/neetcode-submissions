class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;


        for(auto x : strs)
        {
            string sortChar = x;
            sort(x.begin(),x.end());

            mp[x].push_back(sortChar);
        }

       vector<vector<string>> result;
        for(auto x: mp)
        {
            result.push_back(x.second);
        }

        return result;
    }
};
