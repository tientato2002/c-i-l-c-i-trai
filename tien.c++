#include<bits/stdc++.h>
using namespace std;
int haha(vector<int>a,int n){
    int max=0;
    for(int i = 0 ; i < n ; i ++){
        for(int j=n-1 ; j>0;j--){
            if(a[i]<a[j]&&(j-i)>max){
               max=j-i;
            }
        }
    }
    return max ;
}
main(){
    int t ;
    cin>> t ;
    while(t--){
    int n ;
    cin>>n;
    vector<int>a(n) ;
    for(int i = 0 ; i < n ;i++){
        cin>>a[i];
    }
cout<<haha(a,n);
}
}