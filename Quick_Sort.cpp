#include<iostream>
#include<vector>
using namespace std;

int Pivot(vector<int>& divide, int low,int high){
    int pivot=divide[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(divide[j]<pivot){
            ++i;
            int temp=divide[i];
            divide[i]=divide[j];
            divide[j]=temp;
        }
    }
    ++i;
    int temp=divide[i];
    divide[i]=divide[high];
    divide[high]=temp;
    return i;
}

void QuickSort(vector<int>& quick,int low, int high){
    
    if(low<high){
        int pivindex = Pivot(quick,low,high);
        QuickSort(quick,low,pivindex-1);
        QuickSort(quick,pivindex+1,high);
    }
}

int main(){
    vector<int> arr;
    int size;
    cout<<"Enter length of the array :";
    cin>>size;
    int x;
    for(int i=0;i<size;i++){
        cin>>x;
        arr.push_back(x);
    }

    QuickSort(arr,0,size-1);

    //print

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}