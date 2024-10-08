#include<iostream>

using namespace std;

int main(){

  int *arr,i,no_of_element,j;

  cout<<"Enter size of array : ";
  cin>>no_of_element;

  arr=(int*)malloc(sizeof(int)*no_of_element);


  cout<<"\nEnter values : ";
  for(i=0;i<no_of_element;i++){
    cin>>arr[i];
  }
int t;
  for(i=0;i<no_of_element-1;i++){
        for(j=i+1;j<no_of_element;j++){
            if(arr[i]>arr[j]){
                    t=arr[i];
                arr[i]=arr[j];
            arr[j]=t;
                }
        }
}
 for(i=0;i<no_of_element;i++)
        cout<<"\t "<<arr[i];

    return 0;
}
