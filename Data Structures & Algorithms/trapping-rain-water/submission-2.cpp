class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        vector<int>prefixMax(n);
        vector<int>suffixMax(n);

        prefixMax[0]=height[0];

        for(int i=1; i<n; i++)
        {
            if(height[i]>prefixMax[i-1])
            {
                prefixMax[i]=height[i];
            }
            else
            {
                prefixMax[i]=prefixMax[i-1];
            }
        }

        suffixMax[n-1]=height[n-1];
        for(int i=n-2; i>=0; i--)
        {

                if(height[i] >suffixMax[i+1] )
                {
                    suffixMax[i]=height[i];
                }
                else
                {
                    suffixMax[i]=suffixMax[i+1];
                }
        }

        int total=0;
        int preMax=0;
        for(int i=0; i<n-1; i++)
        {
           
            
            if(height[i]<preMax && height[i]<suffixMax[i])
            {
                total=total+(min(preMax,suffixMax[i])-height[i]);
            }

           if(height[i]>preMax)
            {
                preMax=height[i];
            }
        }

        return total;
    }
};
