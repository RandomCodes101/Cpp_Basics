#include<bits/stdc++.h>
using namespace std;

bool co(int&a,int&b){
    return a>b;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++){
       cin>>arr[i];
    }
    sort(arr,arr+n);//asc order
    sort(arr,arr+n,co); //desc order

    for(int i = 0;i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}