class Solution {
public:
    int maxArea(vector<int>& heights) {

       int left=0;
       int right=heights.size()-1;
       int maxValue = 0;

       while(left<right)
       {

          int hight = min(heights[left],heights[right]);
          int width =right-left;
          if(hight*width > maxValue)
          {
            cout<<left<<right<<hight*width<<endl;
            maxValue=hight*width;
          } 
          else if(heights[left] <=  heights[right])
          {
            left++;
          } 
          else
          {
            right--;
          }
       } 

       return maxValue;
    }
};
