#include<iostream>
using namespace std;
int main(){
    double x,y;
    char oper;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter operator ( +,-,*,/)";
    cin>>oper;
    cout<<#include <iostream>
    cout <<"Enter second number : ";
    cin >> y;

    if (oper=='+')
        cout << "Answer:"<< x+y;
    else if (oper=='-')
        cout << "Answer:"<< x-y;
    else if (oper=='*')
        cout << "Answer:"<< x*y;
    else if (oper=='/') {
        if (y! 0)
         cout << "Answer=" <<x/y;
        else
         cout << "Cannot divide by zero!";
    }
    else
    cout << "Invalid operator!";
    return 0;
}

}