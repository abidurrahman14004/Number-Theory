bool prime(int n){
if(n<2) return false;
if(n<=3) return true;
if(n%2==0) return false;
for(int i=2;i<=sqrt(n);i++){

    if(n%i==0) return false;
    else return true;
}


}
