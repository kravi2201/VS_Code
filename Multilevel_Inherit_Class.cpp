#include<iostream>

using namespace std;

class Inherit{
    int number1;
    int number2;

    public:

    Inherit(){}
    friend class SubInherit1;
    friend class SubInherit2;
};

class SubInherit1{
    int number3;
    int number4;
    public:

    void getter(Inherit& obj){
        printf("Enter 1st no : ");
        cin>>obj.number1;
        printf("\nEnter 2nd no : ");
        cin>>obj.number2;
    }
    void setter(Inherit& obj){
        cout<<"Number1 = "<<obj.number1<<endl<<"Number2 = "<<obj.number2<<endl;
    }

    friend class SubInherit2;
};

class SubInherit2{
    public:

    void getter(SubInherit1& obj1, Inherit& obj){
        obj1.number3=obj.number1;                  //obj1.number3 = 10   
        obj1.number4=obj.number2;                  //obj1.number4 = 20
        obj1.number3=obj1.number3+obj1.number4;    //obj1.number3 = 10+20 = 30 
        obj1.number4=obj1.number3-obj1.number4;    //obj1.number4 = 30-20 = 10
        obj1.number3=obj1.number3-obj1.number4;    //obj1.number3 = 30-10 = 20

    }

    void setter(SubInherit1& obj1){
        cout<<"Number3 = "<<obj1.number3<<endl<<"Number4 = "<<obj1.number4<<endl;
    }

    void setter1(SubInherit1& obj1){
        cout<<"Product = "<<obj1.number3*obj1.number4<<endl;
    }
};

int main(){
    Inherit inherit;
    SubInherit1 subInherit1;
    SubInherit2 subInherit2;

    subInherit1.getter(inherit);
    subInherit1.setter(inherit);
    
    subInherit2.getter(subInherit1,inherit);
    subInherit2.setter(subInherit1);
    subInherit2.setter1(subInherit1);
    
    return 0;
}