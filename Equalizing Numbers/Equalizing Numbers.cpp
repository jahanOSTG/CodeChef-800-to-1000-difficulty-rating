#include <bits/stdc++.h>
using namespace std;

int main() {

	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    if(abs(a-b)%2==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}

}
