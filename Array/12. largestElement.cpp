#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int largest = 0;
//     for(int i = 0; i<arr.size(); i++){
        
//         if(largest <= arr[i]){
//             largest = arr[i];
//         }
        
//     }
for(auto element:arr){
     largest = max(largest,element);
}
    return largest;
     
}

int main(){
     vector<int> arr = {-1,-2,-3,-3,8};
     int a = largestElement(arr);
     cout << a;
}