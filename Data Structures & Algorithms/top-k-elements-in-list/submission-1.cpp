class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;

        for(int i : nums)
        {
            mp[i]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto x : mp)
        {
            bucket[x.second].push_back(x.first);
        }

        vector<int>ans;

        for(int i=bucket.size()-1; i>=0; i--)
        {

            for(int num : bucket[i])
            {
                 if(ans.size()==k)
                    {
                        return ans;
                    }
                ans.push_back(num);
                
            }
        }

        return ans;
    }
};
