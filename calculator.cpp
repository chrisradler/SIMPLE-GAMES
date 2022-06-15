#include <iostream>

using namespace std;

int main()
{
    int num ;
    int num2 ;
    
cout << "Input a number" << endl;
cin >> num;

cout << "Input another number" << endl;
cin >> num2;

char opr;
cout <<"Select + ,-, * , / \n input >>" ;
cin >> opr;
int sum ,subtract , multiply, divide;
    
    switch (opr ){
        case '+':
            sum = num + num2;
            cout << "The sum is: " <<sum<<endl;
            break;
        case '-':
            subtract = num - num2;
            cout << "The subtraction is:"<<subtract << endl;
            break;
        case '*':
            multiply = num * num2;
            cout << "The multiplication is: "<<multiply << endl;
            break;
        case '/':
            divide = num / num2;
            cout << "The division is: "<<divide << endl;
            break;
        default:
            cout << "Invalid" << endl;
    }

}

   

        
