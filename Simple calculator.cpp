#include<iostream>

using namespace std;
int main()
{
    char operation;
    float num1, num2, result;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;
    cout<<"Choose an operation(+, -, *, /)"<<endl;
    cin>>operation;
    
    switch(operation) {
        case '+':
        cout << num1 <<"+" << num2 <<"=" << num1+num2 <<endl;
        break;
        case '-':
        cout<< num1 <<"-" << num2 <<"=" << num1-num2 <<endl;
        break;
        case '*':
        cout<< num1 << "*" << num2 <<"=" << num1*num2 <<endl;
        break;
        case '/':
        if (num2==0) {
            cout<<" Error: Can't divide by zero" <<endl;
        }
        else {
            cout<< num1 <<"/" <<num2 <<"=" <<num1/num2 <<endl;
        }
        break;
        default:
        cout<<"Invalid operation selected!" << endl;
     }
return 0;
}