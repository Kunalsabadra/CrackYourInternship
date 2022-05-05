#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> &arr){            //T.C:O(n) S.C:O(n)    
    int n= arr.size();
    int freq[n+1] = {0};
    int ans=0;
    for(int i=0; i<n; i++){
        if(freq[arr[i]] == 0){
            freq[arr[i]] += 1;
        }
        else ans = arr[i];
    }
    return ans;
}

// Optimised Approach using cycled Linked List


int main(){
  
   vector<int> arr = {2,5,9,6,9,3,8,5,9,1};
   cout<<duplicate(arr);
    
    return 0;
}