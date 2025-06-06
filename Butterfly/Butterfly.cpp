#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	long long a,b,c;
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    long d=max({a,b,c});
	    long sum=a+b+c;
	    if(d<=sum-d){
            cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }

	}

}
