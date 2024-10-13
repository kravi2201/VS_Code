#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;
    int i,no_of_element;
    cout<<"Enter the size of the array : ";
    cin>>no_of_element;

    // arr = (int *)malloc(sizeof(int)*no_of_element);
    //arr1 = (int *)malloc(sizeof(int)*no_of_element);
   arr.resize(no_of_element);
    cout<<"\nEnter the data : ";

    for(i=0;i<no_of_element;i++)
    cin>>arr[i];

    for(i=0;i<no_of_element;i++){
        cout<<arr[i]<<"\t";
    }
cout<<"\n";
    // arr1 = (int *)malloc(sizeof(int)*no_of_element);
    // int x=0;
    // for(i=no_of_element-1;i>-1;i--){
    //     arr1[x++]=arr[i]; 
    //     // x++;
    // }

    reverse(arr.begin(),arr.end());

    for(i=0;i<no_of_element;i++){
        cout<<"\t"<<arr[i];
    }

    return 0;
}