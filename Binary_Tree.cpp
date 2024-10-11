#include<iostream>
#include<stdlib.h>

using namespace std;

struct student{
    int data;
    student *left,*right;

    student(int data):data{data},left{nullptr},right{nullptr} {}

}*root;

void print(student* root){
    if(root==NULL)
    return;

    cout<<root->data<<"  ";

    print(root->left);
    print(root->right);
}

int main(){
    root=new student(1);
    student *left=new student(2);
    student* right=new student(3);
    student *left_left=new student(4);
    student* left_right= new student(5);
    student* right_left= new student(6);
    student* right_right= new student(7);

    root->left=left;
    root->right=right;
    left->left=left_left;
    left->right=left_right;
    right->left=right_left;
    right->right=right_right;

    print(root);

    delete left;
    delete right;
    delete left_left;
    delete left_right;
    delete right_left;
    delete right_right;

    return 0;

}