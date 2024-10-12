#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

void Merge(vector<int>& merge, int si, int mid, int ei){
    int *arr=new int[ei-si+1];
    int indx1=si;
    int indx2=mid+1;
    int x=0;

    while(indx1<=mid && indx2<=ei){
        if(merge[indx1]<=merge[indx2]){
            arr[x++]=merge[indx1++];
        }
        else {
            arr[x++]=merge[indx2++];
        }
    }

    while(indx1<=mid){
        arr[x++]=merge[indx1++];
    }

    while(indx2<=ei){
        arr[x++]=merge[indx2++];
    }

    for(int i=0;i<x;i++){
        merge[si+i]=arr[i];
    }
cout<<endl<<"Sorted Array: ";
delete[] arr;
    for(int i=0;i<x;i++){
        cout<<merge[i]<<" ";
    }
}

void Divide(vector<int>& divide,int si,int ei){
    if(si>=ei){
        return;
    }
    
    int mid=si+(ei-si)/2;
    Divide(divide,si,mid);
    Divide(divide,mid+1,ei);

    Merge(divide,si,mid,ei);
    
}
int main(){
    vector<int> arr;
    int size;
    cout<<"Enter no of elements: ";
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"\nThe value you have entered: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }    

    Divide(arr,0,size-1);

    
    return 0;
}