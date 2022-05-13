class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int area =0;
        
        int i=0 , j =n-1;
        
        while(i <j){
            int mini = min(height[i] , height[j]);
            int width = j-i;
            area = max(area , mini*width);
            if(height[i] < height[j]) i++;
            else j--;
        }
       return area;
        
    }
};
