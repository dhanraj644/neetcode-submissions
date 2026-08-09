class Solution {
public:
    bool checkInclusion(string s1, string s2) {


      sort(s1.begin(),s1.end());

      int i=0;
      int r=s2.size();
      int l=s1.size();

      while(l<=r && i<=r)
      {
        string sub=s2.substr(i,l);

        cout<<i<<l<<sub<<endl;

        sort(sub.begin(),sub.end());

        if(sub == s1)
        {
            return true;
        }
        i++;
      }  

      return false;
    }
};
