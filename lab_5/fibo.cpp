// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1|| n==0) return n;
    else{
        return  fibo(n-1)+fibo(n-2);
        
    }
}
int main() {
    int n;
    cout<<"Enter a number bruh:"<<endl;
    cin>>n;
    int i = 0;
    for(int i =0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}
