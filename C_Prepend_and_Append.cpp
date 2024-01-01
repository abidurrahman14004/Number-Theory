#include<bits/stdc++.h>
#include<string>
using namespace std;

int solve(string s,int n){
int l=0;
int r= n-1;
int count=0;

for(int i=0;i<=n/2;i++){
    if(s[l]!=s[r]) {
        
        l++;
        r--;
    }
    else{
     count=r-l+1; 
     break;
    }
 
}
  return count;
}

int main(){
int t;cin>>t;
while(t--){

string str ;
int n;

cin>>n>>str;


cout<<solve(str,n)<<endl;;


}

}