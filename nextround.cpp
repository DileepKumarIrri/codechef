#include<iostream>
using namespace std;

int main()
{    
    int n,k,count=0,temp;
     cin>>n>>k;

     
          for(int i=0;i<n ;i++)
          { 
            cin>>temp;
            if(temp>k) count++;
          }

          cout<<count;
}