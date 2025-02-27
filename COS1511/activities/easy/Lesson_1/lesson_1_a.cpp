#include <iostream>

// Function prototype
int othermain();

int main(){
    std::cout << "Hello World...";
    othermain();
    return 0;
}

using namespace std; // This should be in one line

int othermain() {

    cout << endl;
    cout << "Other Hello World...";
    return 0;
}