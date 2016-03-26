#include <bits/stdc++.h> 

using namespace std;
int isprime(int n){
    if (n==1) return false;
    if (n==2) return true;
    for (int i =2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;

}
int main()
{   while (1){
    int n;
    cin>>n;
    if (isprime(n)) cout<<"YES, it is a prime number!";
    else cout<<"Not a prime!"; 
}

}