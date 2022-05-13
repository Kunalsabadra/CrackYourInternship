//  Code Using Set T.C:O(n) , S.C : O(n)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
      
//       Vector to store duplicate number
       vector<int> ans;
        
//       Set to store unique numbers
        set<int> s;
        for(auto num:nums){
            
          //If already present then it is a duplicate number
            if(s.find(num) != s.end())
                ans.push_back(num);
            
//           if not present already in set then add it to set 
            else  s.insert(num);
        }
        
        return ans;
    }
};


// Optimised using constant space

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
       vector<int> ans;
        
       for(int i=0; i<n; i++){           
         
         //Get the index , the element corresponds to
           int index =  abs(nums[i])-1;
         
//If the no is already negative, it means we are encountering it twice          
           if(nums[index] <0)
               ans.push_back(index+1);
           
// Flip the number to the index to negative         
           nums[index] = nums[index]*-1;
       }
        return ans;
    }
};
