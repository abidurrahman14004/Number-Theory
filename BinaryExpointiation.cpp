#include<bits/stdc++.h>
using namespace std;

int BinaryExpointiation (int base, int pow){
int res=1;
while(pow){
 if (pow%2==1){
    res *=base;
    pow--;
 }
 else{ 
    base*=base;
 pow /= 2;}

}

cout<<"Result is :"<<res<<endl;
return 0;
}

int main(){
cout<<"Enter The following number:"<<endl;
int n,k;
cin>>n>>k;
BinaryExpointiation(n,k);

    return 0;
}