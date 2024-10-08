#include<iostream>

using namespace std;

int main(){
    int *arr,no_of_elements,No_to_remove,i;

    cout<<"Enter no of element to add in an array : ";
    cin>>no_of_elements;

    arr=(int *)malloc(sizeof(int)*no_of_elements);

    for(i=0;i<no_of_elements;i++)
    cin>>arr[i];
   
   cout<<"\nEnter the which you wnat to remove : ";
   cin>>No_to_remove;

    for(i=0;i<no_of_elements;i++){
        if(arr[i]==No_to_remove){
            for(int j=i;j<no_of_elements-1;j++){
                arr[j]=arr[j+1];
            } no_of_elements--;
        i--;
        }
    }

    cout<<"\nArray after removing the number : ";

    for(i=0;i<no_of_elements;i++){
        cout<<"\t\t"<<arr[i];
    }

    return 0;
}