#include<bits/stdc++.h>
using namespace std;

// call by value

// void fd(int n){
//     n+=1;
// }

// call by refernce
void fd(int &n){
    n+=1;
}
int main(){
    int a=5;
    fd(a);
    cout<<a;
    return 0;
} 