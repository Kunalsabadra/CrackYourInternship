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

    // Brute Force approach using set because set stores only unique elements

    int remove(vector<int> &arr){
        // T.C: o(n*log(n))+ O(n)  S.C:O(n)
        int n = arr.size();
        set<int> se;

        for(int i=0; i<n; i++){
           se.insert(arr[i]);    
        }
           int k = se.size();
        //    placing the elements in array by removing duplicates i.e
        // for eg arr={1,1,2,3,4,5,5,,6,6}  ==> arr={1,2,3,4,5,6,_, _, _,_,_ }

          int j=0;
          for(int x=0; x<se.size(); x++){
              arr[j] = x;
              j++;
          }
          return k;
    }

  int main(){

      vector<int> arr={1,2,2,3,5,5,6,7};
      cout<<remove(arr);
  }
