//By Avinash
#include<iostream>

using namespace std;
int fibbonacci(int n){
    if(n==0 || n==1){
        return 1;
    }
    else {
        return fibbonacci(n-1)+fibbonacci(n-2);
}}
int main(){
    int number;
    cin>>number;
    // int series=
    for(int i=0;i<number;i++){
    cout<<"\t"<<fibbonacci(i);
    }

    return 0;
}