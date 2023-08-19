#include<iostream>
using namespace std;

int main(){
    int n;
    int k;
    //declaring
    int s1=0,s2=0,s3 =0;
    cin>>n;
    for(int i=0;i<n*3;i++){
        cin>>k;
        if(i%3 ==0 ){
            s1+=k;
        }
        else if(i%4 ==0){
           s2+=k;
        }
        else{
          s3+=k;
        }
    }
    if(s1+s2+s3 == 0){
        cout<<"YES";
    }
    else 
        cout<<"NO";
    
}