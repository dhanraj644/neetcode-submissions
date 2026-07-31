class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0){return 0;}

        unordered_set<int>st;
   
        int large=1;

        for(int i : nums)
        {
            st.insert(i);
        }

        for(auto it : st)
        {
            if(st.find(it-1) == st.end())
            {
                int count=1;
                int x=it;

                while(st.find(x+1) != st.end())
                {
                    x=x+1;
                    count=count+1;
                }
              large=max(large,count);
            }
        }

        return large;
    }
};
