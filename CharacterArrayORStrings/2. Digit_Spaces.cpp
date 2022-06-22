#include<bits/stdc++.h>
using namespace std;

// Given a sentance, count the number of digits and spaces in the sentance;
int main(){

     char ch;
     // for input
     ch = cin.get();

     int alphabets = 0;
     int digits = 0;
     int spaces = 0;

     while(ch != '\n'){

          if(ch>='0' and ch<='9'){
               digits++;
          }else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
               alphabets++;
          }else if(ch==' ' or ch=='\t'){
               spaces++;
          }

          ch = cin.get();
     }

     cout << "Total Alphabets " << alphabets << endl;
     cout << "Total Digits " << digits << endl;
     cout << "Total Spaces " << spaces <<endl;

}