class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
         if(n==0) return 0;
        
        unordered_map<int , int> mp;
        int current_sum =0;
        int i=0, count=0;
        while(i <n){
            
            current_sum += nums[i];
            if(current_sum == k){          //we found a new array with sum =k
                count +=1;
            }
            int diff = current_sum-k;
            if(mp.find(diff) != mp.end())
                count += mp[diff];
            
            mp[current_sum] += 1;
            i++;
        }
        return count;
    }
};
