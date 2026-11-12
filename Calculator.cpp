#include <iostream>
using namespace std;

int main() {
    int num;
    double a,b;
    cout<<"WELCOME TO CALCULATOR\n";
    
    do{
        cout<<"PRESS\n 1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n 5.EXIT\n";
        cin>>num;

        if(num>=1 && num<=4){
            cout<<"Enter two numbers for operation: ";
            cin>>a>>b;
        }
        switch(num){
            case 1: cout<<"The addition of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
                break;
            case 2: cout<<"The subtraction of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
                break;
            case 3: cout<<"The multiplication of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
                break;
            case 4: {
                if(b==0){
                    cout<<"Denominator cannot be zero!! :(\n";
                }else
                    cout<<"The division of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
                break;
                }
            case 5: cout<<"Exiting the calculator. SayoNaraaa! :)\n";
                break;
            default: cout<<"Invalid input!\n";
        }

    }while(num!=5);
    return 0;
}