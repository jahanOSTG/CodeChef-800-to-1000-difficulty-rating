
#include<iostream>
using namespace std;

int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        if((x*y)%z == 0) cout<<(x*y)<<" "<<z<<endl;
        else if((y*z) % x==0) cout<<(y*z)<<" "<<x<<endl;
        else if((z*x) % y==0) cout<<(z*x)<<" "<<y<<endl;
        else cout<<-1<<endl;

    }
}

