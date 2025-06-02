#include<iostream>
using namespace std;//linear seach
int linearsearch(int  arr[], int sze,int target)
{
    for (int i=0;i<sze;i++){
    if(target==arr[i]){
    return 1;
    }
    }
return -1;
}
int main()
{
    int aee[]={1,2,3,4,5,6};
    int sze=6;
    int target=100;
    cout<<linearsearch(aee,sze,target)<<endl;
    return 0;
}