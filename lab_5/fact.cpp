// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fact(int n){
    if(n<0) cout<<"error bruh"<<endl;
    if(n==0 || n==1) return 1;
    else{
        return n * fact(n-1);
    }
}
int main() {
    int n;
    cout<<"Enter a number bruh:"<<endl;
    cin>>n;
    int res = fact(n);
    cout<<"The result is : "<<res<<endl;

    return 0;
}
