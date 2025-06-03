#include<iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        int a=x*y;
        int b=x*z;
        cout<<abs(a-b)<<endl;
    }
}
