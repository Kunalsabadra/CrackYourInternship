#include<bits/stdc++.h>
using namespace std;

void sortcolour(vector<int> &arr){
    int n = arr.size();
    int low =0 , high = n-1,mid =0;
     while(mid <= high){
         if(arr[mid] == 0){
             swap(arr[low] , arr[mid]);
           mid++;
           low++;
         }
         else if(arr[mid] == 2){
            swap(arr[low] , arr[high]);
            high--;
         }
         else 
         mid++;
     }
     
}

int main(){

    vector<int> v={2,0,2,1,1,1,0,0};
    sortcolour(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}