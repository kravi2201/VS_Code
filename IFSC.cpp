#include<iostream>
#include<string>

using namespace std;

int main(){
    string ifsc_Code;
    int char_size=3;
    cout<<"Enter IFSC Code : ";
    cin>>ifsc_Code;
    int length;
    length = ifsc_Code.length();
    while(length!=11){
        cout<<"\nInvalid IFSC Code : "<<ifsc_Code<<endl;
        cout<<"Enter correct IFSC Code : ";
        cin>>ifsc_Code;
        length = ifsc_Code.length();
    }
    // cout<<"Length = "<<length;

    bool token=true;

    for(int i=0;i<=char_size;i++){
        if(!isalpha(ifsc_Code[i])){
            token=false;
            break;
        }
    }

    for(int i=4;i<11;i++){
        if(!isdigit(ifsc_Code[i])){
            token=false;
            break;
        }
    }

    if(ifsc_Code[4]!='0'){
        token=false;
    }

    if(token){
        cout<<endl<<"Valid IFSC_CODE : "<<ifsc_Code;
    }
    else 
    cout<<endl<<"Invalid IFSC_CODE : "<<ifsc_Code;
    return 0;
}