#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void solve( int n){

int prime[n+3];
memset(prime ,0,sizeof(prime));

for (int i = 2; i < sqrt(n);i++){
    
    if(prime[i]==0){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=1;
        }
    }
     
}
for(int i = 1; i <= n;i++){
    if(prime[i]==0) cout<<i<< " ";
}

cout<<endl;

}

int main(){
int n;
cin>>n;
solve(n);
 
   return 0;
}