#include<bits/stdc++.h>
using namespace std;

class school{
public:
    int number;
    string name;
    school(int a, string b){
        number=a;
        name=b;
    }

};

struct pavan{
    int sno;
    string name;
    pavan(int a,string b){
        sno=a;
        name=b;
    }
};

int main(){
    // school a;
    // cout<<a.number << endl;
    cout<<"Enter Number" << endl;
    int a;
    cin>>a;
    cout<<"Enter name" << endl;;
    string b;
    cin>>b;
    school obj(a,b);
    // school sab(a,)
    cout<<obj.number<< "_"<<obj.name<<endl;
    pavan cb(a,b);
    cout<<cb.sno<<"_"<<cb.name<<endl;
}