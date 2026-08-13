class Solution {

private:
    bool isFreqSame(vector<int>& f1, vector<int>& f2)
    {
        for(int i = 0; i < 26; i++)
        {
            if(f1[i] != f2[i])
            {
                return false;
            }
        }

        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        if(s1.size() > s2.size())
        {
            return false;
        }

        vector<int> freq(26, 0);
        vector<int> winfreq(26, 0);

        // Frequency of s1
        for(int i = 0; i < s1.size(); i++)
        {
            freq[s1[i] - 'a']++;
        }

        int windowSize = s1.size();

        // First window
        for(int i = 0; i < windowSize; i++)
        {
            winfreq[s2[i] - 'a']++;
        }

        if(isFreqSame(freq, winfreq))
        {
            return true;
        }

        // Sliding window
        for(int i = windowSize; i < s2.size(); i++)
        {
            // Add new character
            winfreq[s2[i] - 'a']++;

            // Remove old character
            winfreq[s2[i - windowSize] - 'a']--;

            if(isFreqSame(freq, winfreq))
            {
                return true;
            }
        }

        return false;
    }
};