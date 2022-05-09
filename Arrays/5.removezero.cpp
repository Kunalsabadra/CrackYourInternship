#include<bits/stdc++.h>
using namespace std;

// Q. Move Zeroes  to the end of array while maintaining the relative order of non zero elements

void remove(vector<int> &nums){

    int n = nums.size();
    int right =0 , left =0;

    while(right <n){
        if(nums[right] ==0) right++;
        
        else{
            swap(nums[left] , nums[right]);
            left++;
            right++;
        }
            }
}

int main(){

    vector<int> nums= {0,1,0,3,12};

    remove(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}