#include<bits/stdc++.h>
using namespace std;

int main(){
    char op;
    int num1,num2;

    cout<<"enter the operation you wish to perform(+,-,*,/)"<<endl;
    cin>>op;

    cout<<"enter the numbers "<<endl;
    cin>>num1>>num2;

    switch (op){
    case '+':
        cout<< num1 <<"+" << num2 << "=" << num1+num2;
        break;

    case '-': 
        cout<< num1 <<"-" << num2 << "=" << num1-num2;
        break;
    
    case '*':
        cout<< num1 <<"*" << num2 << "=" << num1*num2;
        break;

    case '/':
    if(num2 !=0)
        cout<< num1 <<"/" << num2 << "=" << num1/num2;
    else
        cout<<"division by zero situation";
        break;

    default:
        cout<<"invalid input";
    }

    return 0;
}