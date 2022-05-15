class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> ans;
        if(nums.empty()) return ans;
        
        int n = nums.size();
        
        sort(nums.begin() , nums.end());
        for(int i=0; i<n; i++){
             int target_3 = target - nums[i];
            for(int j =i+1 ; j<n; j++){
               
                int target_2 =  target_3 - nums[j];
                int front = j+1;
                int back = n-1;
                while(front<back){
                     int two_sum = nums[front] + nums[back];
                    if(two_sum < target_2) front++;
                    else if(two_sum > target_2) back--;
                    else{
                        
                        vector<int> quadruplt(4 , 0);
                        quadruplt[0] = nums[i];
                        quadruplt[1] = nums[j];
                        quadruplt[2] = nums[front];
                        quadruplt[3] = nums[back];
                        ans.push_back(quadruplt);
                        
                    //Procssing the duplicate number 3
                        while(front < back and nums[front] == quadruplt[2]) front++;
                        
                //Processing the duplicate number 4
                        while(front < back and nums[back] == quadruplt[3]) back--;
                    }
                }
                //Processing the duplicate number 2
                while(j+1 <n and nums[j+1] == nums[j]) j++;
            }
            while(i+1 <n and nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};
