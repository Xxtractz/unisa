#include <iostream>

using namespace std;


void printCAPSOnly(char character);
bool isCapital(char character);


int main(){
    char testChar; // 'E'

    testChar = 65;
    int testCharIndex =  65;
    while(testCharIndex <= 127)
    { 
        testChar = testCharIndex;
        // printCAPSOnly(testChar);

        if(isCapital(testChar)){
           
            cout << "Printing Capital Characters Only -->"<< testChar << endl;
        }

        // cout << testCharIndex  << " --> represents -> as a Char --> " << testChar << endl; 
        testCharIndex++;
    }

    return 0;
}

void printCAPSOnly(char character){
    int charToIn = character;
    if(charToIn >= 65 && charToIn <= 90){
        cout << character << endl;
    }
}

bool isCapital(char character){
    int charToIn = character;
    if(charToIn >= 65 && charToIn <= 90){
        return true;
    }
    return false;
}
