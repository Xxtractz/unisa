

//  O | X | 0
//  0 | X | 0
//  X | 0 | X

#include <iostream>

using namespace std;

char x = 'X'; // global variables
char o = 'O';
char pH  = '-';
const int SIZE = 3;

//Prototype a function
char handleInput(int input);
void printStart();
void printLineBreaker();
void printGameBoard(char gameboard[SIZE][SIZE]);

int main()
{
    char gameBoard[SIZE][SIZE] = {{pH,pH,pH},
                            {pH,pH,pH},
                            {pH,pH,pH}};
    bool gameOver = false;

    printStart();

    while (!gameOver)
    {
        printGameBoard(gameBoard);

        // handle the input
        // PLayer inputs position 1, 
        // we need to change player turn and also be able to Check if position doesn't contain X/O

        // Validations
        gameOver = true;

    }
    return 0;
}

void printGameBoard(char gameboard[SIZE][SIZE]){
    printLineBreaker();
    for (int row = 0 ; row < SIZE; row++){
        cout << "| ";
        for (int col = 0; col < SIZE; col++){
            cout << gameboard[row][col] << " | ";
        }
        cout << endl;
    }
    printLineBreaker();
}

void printLineBreaker(){
    cout << "--------------\n"; 
}

void printStart(){
    cout << "Welcome to the TIC TAC TOE Game........" << endl;
    cout << "How to Play \n Please enter position 1 - 9, see Example below..." << endl;
    cout << " 1 | 2 | 3" << endl;
    cout << " 4 | 5 | 6" << endl;
    cout << " 7 | 8 | 9" << endl;
}

char handleInput(int input){

    return x;
}
// That's if the function/method comes after  the main();