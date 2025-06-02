#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    cout<<"Enter the rows: ";
    cin>>m;
    cout<<"Enter the cols: ";
    cin>>n;
    int time = 0;
    int count = 0;
    cout<<"Enter the array :";
    int A[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(A[i][j] == 2 && A[i][j+1]== 1){
                A[i][j] = 0;
                time+=1;
                A[i][j+1] = 2;
                time+=1;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(A[i][j]==0){
                count+=1;
            }
        }}
    
    if(count == (m*n)){
        cout<<time;
    }
    else{
        cout<<-1;
    }
    return 0;
}
