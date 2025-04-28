#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        string s, g;
        cin>>s>>g;
        for(int i=0; i<5; i++){
            if(s[i]==g[i]){
                cout<<"G";
            }
            else{
                cout<<"B";
            }
        }
        cout<<endl;
    }
}
