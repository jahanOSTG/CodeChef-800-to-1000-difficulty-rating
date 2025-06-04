
#include<iostream>
using namespace std;
int main(){
    int t,h,x,y,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>h>>x>>y>>c;
        int total=x+(y/2);
        int use=h*total;
        if(use>c){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}
