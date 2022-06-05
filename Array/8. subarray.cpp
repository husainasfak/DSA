// sub array
// sub of sub array
// largest of sum of sub array

#include<bits/stdc++.h>
using namespace std;

void subArray(int arr[], int sizeOfArray){
     int LARGEST_SUBARRAY_SUM = 0;

     for(int  i = 0; i < sizeOfArray; i++){

          for(int j = i; j < sizeOfArray; j++){

               int subArraySum = 0;

               for(int k = i; k<=j; k++){

                    // Print each sub array

                    cout<< arr[k]<<",";

                    subArraySum += arr[k];

               }

               // check if current sub array sum is greater then largest sub array sum
               LARGEST_SUBARRAY_SUM = max(LARGEST_SUBARRAY_SUM,subArraySum);
               cout<<endl;
          }

     }

     cout<<LARGEST_SUBARRAY_SUM;

}

int main(){
     int arr[] = {-2,3,4,-1,5,-12,6,1,3};
     int sizeOfArray = sizeof(arr)/sizeof(int);
     subArray(arr,sizeOfArray);
     
}

// time complexity O(n3)