#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,j = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++){
       cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<=n;i++){
        if(arr[i]==0){
            c++;
        }else{
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<c;i++){
        arr[n-i-1] = 0;
    }

    for(int i = 0;i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}