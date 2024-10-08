#include<iostream>
using namespace std;
int main(){
    int lower_limit;
    int upper_limit;
    
    cout<<"Enter Lower Limit: ";
    cin>>lower_limit;
    cout<<"\nEnter Upper Limit: ";
    cin>>upper_limit;

    int j;
    for(int i=lower_limit;i<=upper_limit;i++){
        j=1;
        int count=0;
        while(j<=i){
            if(i%j==0){
                count++;
            }
            j++;
        }
        if(count==2){
            cout<<i<<"\t";
        }
    }
    return 0;
}