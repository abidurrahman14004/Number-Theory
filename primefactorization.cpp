#include<bits/stdc++.h>
using namespace std;

int primefactorization(int n){

    for(int i=2; i<=n;i++){

    if (n%i==0){

        int cnt=0;
        while(n%i==0){
            cnt++;
            n=n/i;
        }
        cout<<i<<"^"<<cnt<<endl;

    }
    }
    return 0;
}

int main(){

int t; cin>>t;
while(t--){
int n;
cin>>n;
primefactorization(n);

}
return 0;
}