#include<bits/stdc++.h>
using namespace std ; 
main (){
    int a[100][100];
    int n , m ; 
    cin>>n>>m ; 
    for(int i = 0 ;  i<n ; i ++){
        for(int j = 0 ;j<m;j++){
            cin>>a[i][i];
        }
    }
    int b[n][m];
    int p = 0,N=n,M=m;
    int hang = 0 , cot = 0 ; 
    while(p!=n*m){
      if(p!=m*n-1){
          b[hang][cot]=a[hang][cot];
      }  
      else
      b[hang][cot]=a[hang-1][cot];
      for(int i = cot+1 ; i< M;i++){
          b[hang][i]=a[hang][i-1];
          p++;
      }
    for(int i = hang+1;i<N;i++){
        b[hang][cot]=a[i-1][M-1];
        p++;
    }
    for(int i=N-1-hang;i<M;i++){
        b[hang][i]=
        p++;
    }
    }
}