#include<iostream>
using namespace std;//floyds triangle
int main()
{
    int n;
    char m;
    cout<<"Enter number ";
    cin>>n;
    m='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
    {
        cout<<m<<" ";
    m++;
    }
        cout<<endl;
    }
    return 0;
}