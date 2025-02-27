#include <iostream> 

using namespace std; // This should be in one line

int main() {
    int m = 10;

    cout << "m = " << m << endl;
    m += 3;
    cout << "m = " << m << endl;
    m /= 2;
    cout << "m = " << m << endl;
    m++; 
    cout << "m = " << m << endl;
    m %= 4;
    cout << "m = " << m << endl;
    m -= 5;
    cout << "m = " << m << endl;
    return 0;
}