#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
if(n<2) return false;
if(n<=3) return true;
if(n%2==0) return false;
for(int i=2;i<=sqrt(n);i++){

    if(n%i==0) return false;
<<<<<<< HEAD
}
     return true;
}


int main() {
int t; cin>> t;
while(t--){
int n;
cin>>n;
if(prime(n)) cout<<"yes"<<endl;
else cout<<"no"<<endl;
    
}

=======
    else return true;
}


>>>>>>> 2151dc828c41271d7ece90f1fc8798cc76caa0c8
}
