#include<iostream>
using namespace std;//reverse
int main()
{
    int n,m=1;
    cout<<"Enter number ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
    {
        cout<<j<<" ";
    }

    cout<<endl;
    }
    return 0;
}