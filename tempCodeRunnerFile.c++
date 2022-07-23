#include<bits/stdc++.h>
using namespace std;
main(){
    int t ;
    cin>>t;
    while(t--){
    int n ; 
    cin >> n ;
   long long  h =0;
    for(int i =0 ;i<=n;i++){
        h=h*10+i;
    }
    for(int i=n-1;i>0;i--){
        h=h*10+i;
    }
    cout<<h<<endl;
    }
}