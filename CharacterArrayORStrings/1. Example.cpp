#include<bits/stdc++.h>
using namespace std;

void Example2(){
     char sentance[1000];
     char temp = cin.get();
     int len = 0;
     while(temp != '\n'){
          sentance[len++] = temp;
          // len++;
          // cout << temp;
          // update the value of temp
          temp = cin.get();
     }
     cout << sentance;
     cout<<endl <<"Length " << len;
}


int main(){
     // initialization
     char a1[100];

     // char a2[100] = {'a','b','c'}  wrong cause it gives some garbage values in the end the of the string 

     char a3[100] = {'a','b','c','\0'};// write, should terminate with null character 

     char a[100] = "abc" ; // automatically add null character


     // cout << a << endl;

     // cout << strlen(a) << endl; 
     // cout << sizeof(a) << endl;



     char getInput[100];
     // cin >> getInput; // it doesn't work when we have white space in the string. cin doesnot process white space
     // cout << getInput;

     // cin.get --> accept  1 char at a time but includes everything
     Example2();

     return 0;
}