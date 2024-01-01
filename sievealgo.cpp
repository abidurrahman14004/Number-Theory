#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int llu;
vector<int>v;
bool prime [900000000];
int n=500000000;

void solve(){


for (int i = 2; i < sqrt(n);i++){
    
    if(prime[i]==false){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=true;
        }
    }
     
}
for(int i = 1; i <= n;i++){
    if(prime[i]==false) v.push_back(i);
}

cout<<endl;

}

int main(){
solve();
int n;
cin>>n;
cout<<v[n-1]<<endl;
 
   return 0;
}