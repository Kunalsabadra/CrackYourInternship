#include<bits/stdc++.h>
using namespace std;


    // By using Two pointer x and y
    int removeDuplicates(vector<int>& nums) {
        // T.C: O(n) , S.C:O(1)
        if (nums.size() == 0) return 0;
        int X = 0;
        for (int Y = 1; Y < nums.size(); Y++) 
        {
            if ( nums[X] != nums[Y] ) 
            {
                X++;
                nums[X] = nums[Y];
            }
        }
        return (X + 1); 
    }
