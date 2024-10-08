#include<iostream>
using namespace std;

int main(){
    int number;
    int lower_limit;
    int upper_limit;
    cout<<"Enter Lower Limit: ";
    cin>>lower_limit;
    cout<<"\nEnter Upper Limit: ";
    cin>>upper_limit;
    for(int i=lower_limit;i<=upper_limit;i++){
        int var=i;
        int reverse=0;
        while(var!=0){
            int rem;
            rem=var%10;
            reverse=reverse*10 + rem;
             var=var/10;
        }
        
        if(i==reverse){
            cout<<"\t"<<i;
        }
    }

    return 0;
}