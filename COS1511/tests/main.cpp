#include <iostream>
#include <cstdlib>
#include <math.h>
//#include <mylib.h>
using namespace std;

// Function prototype
int calculatedResult(char input, int num1, int num2);
void calculatedResultV(char input, int num1, int num2, int& result); 

int main()
{
    int num1, num2;
    int result;
    num1 = 52; 
    num2 = 11;
    result = 500;
    char input; //''
    cout << "hello to the caluclator :)" << endl;
    cout << "--------------------------------" << endl;
    cout << "Please enter your first value  : ";
    cin >> num1 ;
    cout << "Please add your operator : ";
    cin >> input;
    cout << "Please enter your Second value  : ";
    cin >> num2 ;

    // result = calculatedResult(input, num1, num2);
    calculatedResultV(input, num1, num2, result);
    
    cout << num1 << input << num2 << "=" << result << "\nThe result is : " << result << endl;

    return 0;
}

int calculatedResult(char input, int num1, int num2){
    switch (input){
        case '+':
            return num1 + num2 ; // Logic for addition
            break;
        case '-':
            return num1 - num2 ; // Logic for subtraction
            break;
        case '*':
            return num1 * num2 ; // Logic for multiplication
            break;
        case '/':
            return num1 / num2 ; // Logic for division
            break;
        case '%':
            return num1 % num2 ; // Logic for modulus
            break;
        default:
            cout << "invalid operator " << endl;
        }
    return 0;
}

void calculatedResultV(char input, int num1, int num2,int& result){
    cout << "calculatedResultV :: The result is : " << result << endl;
    switch (input){
        case '+':
            result = num1 + num2 ; // Logic for addition
            break;
        case '-':
            result = num1 - num2 ; // Logic for subtraction
            break;
        case '*':
            result = num1 * num2 ; // Logic for multiplication
            break;
        case '/':
            result = num1 / num2 ; // Logic for division
            break;
        case '%':
            result = num1 % num2 ; // Logic for modulus
            break;
        default:
            cout << "invalid operator " << endl;
        }
}

