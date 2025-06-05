
#include<iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        if(x<y && x<z) cout<<"Draw"<<endl;
        else if(y<x && y<z) cout<<"Bob"<<endl;
        else if(z<x && z<y) cout<<"Alice"<<endl;
    }
}
