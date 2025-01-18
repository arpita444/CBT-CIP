#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string operation;
    double number1,number2;
    cout<<"Enter first number:";
    cin>>number1;
    cout<<"Enter operation(+,-,*,/):";
    cin>>operation;
    cout<<"Enter second number:";
    cin>>number2;
    if(operation=="+")
    {
        cout<<"Result:"<<number1+number2;
    }
    else if(operation=="-")
    {
        cout<<"Result:"<<number1-number2;
    }
    else if(operation=="*")
    {
        cout<<"Result:"<<number1*number2;
    }
    else if(operation=="/")
    {
        cout<<"Result:"<<number1/number2;
    }
    else
    {
        cout<<"Invalid operation";
    }
    
    return 0;
}
