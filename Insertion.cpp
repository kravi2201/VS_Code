#include<iostream>
using namespace std;

  int main(){

     int *arr,no_of_elements,no_to_be_inserted,index_no,i;

     cout<<"Enter the no of element : ";
     cin>>no_of_elements;

     arr = (int *)malloc(sizeof(int)*no_of_elements);

     cout<<"\nEnter the numbers : ";
     for(i=0;i<no_of_elements;i++){

            cin>>arr[i];
     }

     cout<<"\nEnter the value to insert in an array : ";
     cin>>no_to_be_inserted;

     cout<<"\nEnter the place no to insert the given value : ";
     cin>>index_no;
     cout<<"Array before insertion : ";

     for(i=0;i<no_of_elements;i++){
        cout<<"\n\n\n"<<arr[i];}



     for(i=no_of_elements;i>=index_no;i--){
            arr[i]=arr[i-1];

     }
        arr[index_no-1]=no_to_be_inserted;

     cout<<"Array after insertion : ";
     for(i=0;i<=no_of_elements;i++){
        cout<<"\n\n\n"<<arr[i];
     }

     return 0;

  }
