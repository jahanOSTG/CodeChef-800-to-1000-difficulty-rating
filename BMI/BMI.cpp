#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,m,h;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>m>>h;
	    int x=(m)/(h*h);
	    if(x<=18){
	        cout<<1<<endl;
	    }else if(x>=19 && x<=24){
	        cout<<2<<endl;
	    }else if(x>=25 && x<=29){
	        cout<<3<<endl;
	    }else{
	        cout<<4<<endl;
	    }

	}


}
