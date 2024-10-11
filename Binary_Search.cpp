#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int> arr;
int no_of_element,j,i;
int index=0;
int no_to_search;

cout<<"Enter the size of array : ";
cin>>no_of_element;
// arr=(int*)malloc(sizeof(int)*no_of_element);
// arr.resize(no_of_element);
cout<<"\n\nEnter the values of array : ";
int y;
for(i=0;i<no_of_element;i++){
    cin>>y;
    arr.push_back(y);
}
    //cin>>arr[i];

    cout<<"\n\nEnter no to search : ";
    cin>>no_to_search;
    int mid;
    i=0;
    j=no_of_element-1;
    mid=(i+j)/2;
int x;
    for(i=0;i<no_of_element;i++){
        if(arr[mid]==no_to_search){
            index++;
            x=mid;
            break;
        }
        else if(arr[mid]>no_to_search){
            j=mid-1;
            mid=(j+i)/2;
        }

        else if(arr[mid]<no_to_search){
            i=mid+1;
            mid=(i+j)/2;
        }

    }

    if(index>0){
        cout<<"\n\n\nSuccessfully found at "<<x+1<<" position";
    }

    return 0;
}
