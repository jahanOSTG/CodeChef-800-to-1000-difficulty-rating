
#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        bool is=false;
        for(int y=0;y*7<=x;y++){
            int reminder=x-(7*y);
            if(reminder%2==0){
                is=true;
                break;
            }
        }
        if(is) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}
