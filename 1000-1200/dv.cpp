#include<iostream>
using namespace std;

int main(){

     string s;
     int up=0;
     int lp=0;
     cin>>s;
      for(int i=0;i<s.length();i++){
        if (s[i] >64 && s[i] <91){
            up++;
        }
        else lp++;
     }
     if(up<=lp){
     for(int i=0;i<s.length();i++){
        if (s[i] >64 && s[i] <91){
            s[i] = s[i] +32;
        }
     }
     }
     else{
        for(int i=0;i<s.length();i++){
        if (s[i] >96 && s[i] <123){
            s[i] = s[i] -32;
        }
     }
     }
     cout<<s<<"\n";
    
}