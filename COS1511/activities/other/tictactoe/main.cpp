

//  O | X | 0
//  0 | X | 0
//  X | 0 | X

#include <iostream>

using namespace std;

int main()
{

    char position0 = '-';
    char position1 = '-';
    char position2 = '-';
    char position3 = '-';
    char position4 = '-';
    char position5 = '-';
    char position6 = '-';
    char position7 = '-';
    char position8 = '-';
    int input;

    cout << " Please enter position 1 - 9, see Example below..." << endl;
    cout << " 1 | 2 | 3" << endl;
    cout << " 4 | 5 | 6" << endl;
    cout << " 7 | 8 | 9" << endl;

    // Determine Players ... Player 1 is X and Player 2 O
    // We need to know who's turn is it
    bool isPlayer1Turn = true;


    // if player's turn check if position is available

    char x = 'X';
    char o = 'O';
    char playChar;
    string player;
    while (true)
    {

        if (isPlayer1Turn){
            player = "Player 1" ;
        }else{
            player = "Player 2" ;
        }
        // player = isPlayer1Turn ? "Player 1" : "Player 2" ;
        cout << player << " : Please choose your Position : ";
        cin >> input;
        cout << endl;
        // handle the input
        // Validations




        switch (input)
        {
        case 1: 
            position0 = playChar;
            break;
        case 2:
            position1 = playChar;
            break;
        case 3:
            position2 = playChar;
            break;
        case 4:
            position3 = playChar;
            break;
        case 5:
            position4 = playChar;
            break;
        case 6:
            position5 = playChar;
            break;
        case 7:
            position6 = playChar;
            break;
        case 8:
            position7 = playChar;
            break;
        case 9:
            position8 = playChar;
            break;

        default:
            exit(1);
        }

        cout << " " << position0 << " | " << position1 << " | " << position2 << endl;
        cout << " " << position3 << " | " << position4 << " | " << position5 << endl;
        cout << " " << position6 << " | " << position7 << " | " << position8 << endl;
    }
    return 0;
}
