#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,z,count=0;
    for(int i=0;i<n;i++)
    {
        
        cin>>x>>y>>z;
        if ((x==1 && y == 1  && z ==0)||(x==1 && y == 0  && z ==1)||(x==0 && y == 1  && z ==1)||(x==1 && y == 1  && z ==1))
        {
            count++;
        }
        
        
    }
    cout<<count<<"\n";
}