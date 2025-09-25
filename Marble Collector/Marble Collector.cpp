#include<iostream>
using namespace std;
int main(){
    int t,m,n;
    cin>>t;
    while(t--){

        cin>>n>>m;
        int arr[105];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
                bool isnew= true;
            for(int j=0;j<i;j++){
                if(arr[i]==arr[j]){
                    isnew=false;
                    break;
                }
            }

            if(isnew){
                count++;
            }
        }



     int result=m-count;
      cout<<result<<endl;



    }

}
