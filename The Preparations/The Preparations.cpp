#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int d,a,t,b,c;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    d=b*c;
    if(a<=d){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
  }

}
