class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top =0 , bottom = matrix.size()-1 , left =0, right = matrix[0].size()-1;
        int direc =0;
        vector<int> ans;
        
        while( top <= bottom and left<=right){
            if(direc ==0){
                for(int i =left; i<=right;i++)
                    ans.push_back(matrix[top][i]);
                    top++;
                }
                else if(direc == 1 ){
                    for(int i= top; i<= bottom; i++)
                        ans.push_back(matrix[i][right]);
                        right--;
                }
            
                else if(direc == 2){
                    for(int i= right ; i>= left; i--)
                        ans.push_back(matrix[bottom][i]);
                        bottom--;
                }
                else if (direc == 3){
                    for(int i=bottom;i>= top;i--)
                        ans.push_back(matrix[i][left]);
                        left++;
                    }
                 direc = (direc+1)%4;
        }
        return ans;
    }
};
