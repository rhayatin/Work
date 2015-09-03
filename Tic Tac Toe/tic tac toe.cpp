#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>

using namespace std;
class TIC
{   public:
    int _PlayerChoice,_GameWin;
    bool _PlayerTurn;
    char block[9];
    int _checkWinComputer(void);
    int _CheckWinPlayer(void);
    int _ComputerAI(void);
    int _CheckPlayerInput(void);
    void _GameBoard(void);
    void _Input(void);
    TIC();
};
int i,j;
TIC::TIC()
{
            block[0]='1';
            block[1]='2';
            block[2]='3';
            block[3]='4';
            block[4]='5';
            block[5]='6';
            block[6]='7';
            block[7]='8';
            block[8]='9';
}
int TIC::_checkWinComputer()
{
    if(block[0] == 'O' && block[4] == 'O' && block[8] == 'O' && _PlayerTurn == false) //diagonal, 1 - 5 = 9
        _GameWin = 2; //This will make computer win.
    if(block[2] == 'O' && block[4] == 'O' && block[6] == 'O' && _PlayerTurn == false) //diagonal, 3 - 5 = 7
        _GameWin = 2;
    if(block[0] == 'O' && block[1] == 'O' && block[2] == 'O' && _PlayerTurn == false) //horizontal 1 - 2 = 3
        _GameWin = 2;
    if(block[3] == 'O' && block[4] == 'O' && block[5] == 'O' && _PlayerTurn == false) //horizontal 4 - 5 = 6
        _GameWin = 2;
    if(block[6] == 'O' && block[7] == 'O' && block[8] == 'O' && _PlayerTurn == false) //horizontal 7 - 8 = 9
        _GameWin = 2;
    if(block[0] == 'O' && block[3] == 'O' && block[6] == 'O' && _PlayerTurn == false) //vertical 1 - 4 = 7
        _GameWin = 2;
    if(block[1] == 'O' && block[4] == 'O' && block[7] == 'O' && _PlayerTurn == false) //vertical 2 - 5 = 8
        _GameWin = 2;
    if(block[2] == 'O' && block[5] == 'O' && block[8] == 'O' && _PlayerTurn == false) //vertical 3 - 6 = 9
        _GameWin = 2;
}
int TIC::_CheckWinPlayer()
{
    if(block[0] == 'X' && block[4] == 'X' && block[8] == 'X' && _PlayerTurn == true) //diagonal, 1 - 5 = 9
        _GameWin = 1; //This will make player win.
    if(block[2] == 'X' && block[4] == 'X' && block[6] == 'X' && _PlayerTurn == true) //diagonal, 3 - 5 = 7
        _GameWin = 1;
    if(block[0] == 'X' && block[1] == 'X' && block[2] == 'X' && _PlayerTurn == true) //horizontal 1 - 2 = 3
        _GameWin = 1;
    if(block[3] == 'X' && block[4] == 'X' && block[5] == 'X' && _PlayerTurn == true) //horizontal 4 - 5 = 6
        _GameWin = 1;
    if(block[6] == 'X' && block[7] == 'X' && block[8] == 'X' && _PlayerTurn == true) //horizontal 7 - 8 = 9
        _GameWin = 1;
    if(block[0] == 'X' && block[3] == 'X' && block[6] == 'X' && _PlayerTurn == true) //vertical 1 - 4 = 7
        _GameWin = 1;
    if(block[1] == 'X' && block[4] == 'X' && block[7] == 'X' && _PlayerTurn == true) //vertical 2 - 5 = 8
        _GameWin = 1;
    if(block[2] == 'X' && block[5] == 'X' && block[8] == 'X' && _PlayerTurn == true) //vertical 3 - 6 = 9
        _GameWin = 1;
}
int TIC::_ComputerAI() //work on computerAI part where the computer tries to win before countering.
{
    _PlayerTurn == false;

    if(block[0] == 'O' && block[1] == 'O' && _PlayerTurn == false && block[2] == '3') //1 - 2 = 3 win
    {
        block[2] = 'O';
        _PlayerTurn = true;
    }

    if(block[3] == 'O' && block[4] == 'O' && _PlayerTurn == false && block[5] == '6') //4 - 5 = 6 win
    {
        block[5] = 'O';
        _PlayerTurn = true;
    }

    if(block[6] == 'O' && block[7] == 'O' && _PlayerTurn == false && block[8] == '9') //7 - 8 = 9 win
    {
        block[8] = 'O';
        _PlayerTurn = true;
    }

    if(block[0] == 'O' && block[3] == 'O' && _PlayerTurn == false && block[6] == '7') //1 - 4 = 7 win
    {
        block[6] = 'O';
        _PlayerTurn = true;
    }

    if(block[1] == 'O' && block[4] == 'O' && _PlayerTurn == false && block[7] == '8') //2 - 5 = 8 win
    {
        block[7] = 'O';
        _PlayerTurn = true;
    }

    if(block[2] == 'O' && block[5] == 'O' && _PlayerTurn == false && block[8] == '9') //3 - 6 = 9 win
    {
        block[8] = 'O';
        _PlayerTurn = true;
    }

    if(block[0] == 'O' && block[4] == 'O' && _PlayerTurn == false && block[8] == '9') //1 - 5 = 9 win
    {
        block[8] = 'O';
        _PlayerTurn = true;
    }

    if(block[2] == 'O' && block[4] == 'O' && _PlayerTurn == false && block[6] == '7') //3 - 5 = 7 win
    {
        block[6] = 'O';
        _PlayerTurn == true;
    }

    if((_PlayerChoice == 1 || _PlayerChoice == 5 || _PlayerChoice == 9) && _PlayerTurn == false)
    {
        if((block[0] == 'X' && block[4] == 'X') && _PlayerTurn == false && block[8] == '9') //1 - 5 = 9 diagonal
        {
            block[8] = 'O';
            _PlayerTurn = true;
        }

        if((block[0] == 'X' && block[8] == 'X') && _PlayerTurn == false && block[4] == '5') //1 - 9 = 5 diagonal
        {
            block[4] = 'O';
            _PlayerTurn = true;
        }

        if((block[4] == 'X' && block[8] == 'X') && _PlayerTurn == false && block[0] == '1') //5 - 9 = 1 diagonal
        {
            block[0] = 'O';
            _PlayerTurn = true;
        }
    }

    if((_PlayerChoice == 3 || _PlayerChoice == 5 || _PlayerChoice == 7) && _PlayerTurn == false)
    {
        if((block[6] == 'X' && block[4] == 'X') && _PlayerTurn == false && block[2] == '3') //7 - 5 = 3 diagonal
        {
            block[2] = 'O';
            _PlayerTurn = true;
        }

        if((block[6] == 'X' && block[2] == 'X') && _PlayerTurn == false && block[4] == '5') //7 - 3 = 5 diagonal
        {
            block[4] = 'O';
            _PlayerTurn = true;
        }

        if((block[4] == 'X' && block[2] == 'X') && _PlayerTurn == false && block[6] == '7') //5 - 3 = 7 diagonal
        {
            block[6] = 'O';
            _PlayerTurn = true;
        }
    }

    if((_PlayerChoice == 1 || _PlayerChoice == 2 || _PlayerChoice == 3) && _PlayerTurn == false)
    {
        if((block[0] == 'X' && block[1] == 'X') && _PlayerTurn == false && block[2] == '3') // 1 - 2 = 3 horizontal
        {
            block[2] = 'O';
            _PlayerTurn = true;
        }

        if((block[0] == 'X' && block[2] == 'X') && _PlayerTurn == false && block[1] == '2') //1 - 3 = 2 horizontal
        {
            block[1] = 'O';
            _PlayerTurn = true;
        }

        if((block[1] == 'X' && block[2] == 'X') && _PlayerTurn == false && block[0] == '1') //2 - 3 = 1 horizontal
        {
            block[0] = 'O';
            _PlayerTurn = true;
        }
    }

    if((_PlayerChoice == 4 || _PlayerChoice == 5 || _PlayerChoice == 6) && _PlayerTurn == false)
    {
        if((block[3] == 'X' && block[4] == 'X') && _PlayerTurn == false && block[5] == '6') //4 - 5 = 6 horizontal line 2
        {
            block[5] = 'O';
            _PlayerTurn = true;
        }

        if((block[3] == 'X' && block[5] == 'X') && _PlayerTurn == false && block[4] == '5') //4 - 6  = 5 horizontal line 2
        {
            block[4] = 'O';
            _PlayerTurn = true;
        }

        if((block[4] == 'X' && block[5] == 'X') && _PlayerTurn == false && block[3] == '4') //5 - 6 = 4 horizontal line 2
        {
            block[3] = 'O';
            _PlayerTurn = true;
        }
    }

    if((_PlayerChoice == 7 || _PlayerChoice == 8 || _PlayerChoice == 9) && _PlayerTurn == false)
    {
        if((block[6] == 'X' && block[7] == 'X') && _PlayerTurn == false && block[8] == '9') //7 - 8 = 9 horizontal line 3
        {
            block[8] = 'O';
            _PlayerTurn = true;
        }

        if((block[6] == 'X' && block[8] == 'X') && _PlayerTurn == false && block[7] == '8') //7 - 9 = 8 horizontal line 3
        {
            block[7] = 'O';
            _PlayerTurn = true;
        }

        if((block[7] == 'X' && block[8] == 'X') && _PlayerTurn == false && block[6] == '7') //8 - 9 = 7 horizontal line 3
        {
            block[6] = 'O';
            _PlayerTurn = true;
        }
    }

    if((_PlayerChoice == 1 || _PlayerChoice == 4 || _PlayerChoice == 7) && _PlayerTurn == false)
    {
        if((block[0] == 'X' && block[3] == 'X') && _PlayerTurn == false && block[6] == '7') //1 - 4 = 7 vertical row 1
        {
            block[6] = 'O';
            _PlayerTurn = true;
        }

        if((block[0] == 'X' && block[6] == 'X') && _PlayerTurn == false && block[3] == '4') //1 - 7 = 4 vertical row 1
        {
            block[3] = 'O';
            _PlayerTurn = true;
        }

        if((block[3] == 'X' && block[6] == 'X') && _PlayerTurn == false && block[0] == '1') //4 - 7 = 1 vertical row 1
        {
            block[0] = 'O';
            _PlayerTurn = true;
        }

    }

    if((_PlayerChoice == 2 || _PlayerChoice == 5 || _PlayerChoice == 8) && _PlayerTurn == false)
    {
        if((block[1] == 'X' && block[4] == 'X') && _PlayerTurn == false && block[7] == '8') //2 - 5 = 8 vertical row 2
        {
            block[7] = 'O';
            _PlayerTurn = true;
        }

        if((block[1] == 'X' && block[7] == 'X') && _PlayerTurn == false && block[4] == '5') //2 - 8 = 5 vertical row 2
        {
            block[4] = 'O';
            _PlayerTurn = true;
        }

        if((block[4] == 'X' && block[7] == 'X') && _PlayerTurn == false && block[1] == '2') //5 - 8 = 2 vertical row 2
        {
            block[1] = 'O';
            _PlayerTurn = true;
        }
    }

    if((_PlayerChoice == 3 || _PlayerChoice == 6 || _PlayerChoice == 9) && _PlayerTurn == false)
    {
        if((block[2] == 'X' && block[5] == 'X') && _PlayerTurn == false && block[8] == '9') //3 - 6 = 9 vertical row 3
        {
            block[8] = 'O';
            _PlayerTurn = true;
        }

        if((block[2] == 'X' && block[8] == 'X') && _PlayerTurn == false && block[5] == '6') //3 - 9 = 6 vertical row 3
        {
            block[5] = 'O';
            _PlayerTurn = true;
        }

        if((block[5] == 'X' && block[8] == 'X') && _PlayerTurn == false && block[2] == '3') //6 - 9 = 3 vertical row 3
        {
            block[2] = 'O';
            _PlayerTurn = true;
        }
    }
    else
    {
        do
        {
            if(block[0] == '1' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[0] = 'O';
            }
            if(block[1] == '2' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[1] = 'O';
            }
            if(block[2] == '3' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[2] = 'O';
            }
            if(block[3] == '4' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[3] = 'O';
            }
            if(block[4] == '5' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[4] = 'O';
            }
            if(block[5] == '6' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[5] = 'O';
            }
            if(block[6] == '7' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[6] = 'O';
            }
            if(block[7] == '8' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[7] = 'O';
            }
            if(block[8] == '9' && _PlayerTurn == false)
            {
                _PlayerTurn = true;
                block[8] = 'O';
            }
        }while(_PlayerTurn = false);
    }
    return 0;
}

int TIC::_CheckPlayerInput()
{
    if(_PlayerChoice == 1 && block[0] == '1')
        block[0] = 'X';
    if(_PlayerChoice == 2 && block[1] == '2')
        block[1] = 'X';
    if(_PlayerChoice == 3 && block[2] == '3')
        block[2] = 'X';
    if(_PlayerChoice == 4 && block[3] == '4')
        block[3] = 'X';
    if(_PlayerChoice == 5 && block[4] == '5')
        block[4] = 'X';
    if(_PlayerChoice == 6 && block[5] == '6')
        block[5] = 'X';
    if(_PlayerChoice == 7 && block[6] == '7')
        block[6] = 'X';
    if(_PlayerChoice == 8 && block[7] == '8')
        block[7] = 'X';
    if(_PlayerChoice == 9 && block[8] == '9')
        block[8] = 'X';
    return 0;
}

void TIC::_GameBoard()
{
    cout << "+-----+-----+-----+" << endl;
    cout << "|  " <<block[0] << "  |  " << block[1] << "  |  " << block[2] << "  |" << endl;
    cout << "+-----+-----+-----+" << endl;
    cout << "|  " <<block[3] << "  |  " << block[4] << "  |  " << block[5] << "  |" << endl;
    cout << "+-----+-----+-----+" << endl;
    cout << "|  " <<block[6] << "  |  " << block[7] << "  |  " << block[8] << "  |\n";
    cout << "+-----+-----+-----+" << endl;
}
void TIC::_Input()
{
        _GameBoard();
    //    _CheckPlayerInput();
        _PlayerTurn = true;
        do
        {
            if(_PlayerTurn == true) //player loop
            {
                cout << "Please choose a grid to place (X): "<<endl<<endl;
                cin>>_PlayerChoice;
                _CheckPlayerInput();
                system("CLS");
                _GameBoard();
                _CheckWinPlayer();
                _PlayerTurn = false;

            }

            if(_PlayerTurn == false) //computer loop
            {
                _ComputerAI();
                system("CLS");
                _GameBoard();
                _checkWinComputer();
                _PlayerTurn = true;
            }
        }while(_GameWin > 2);
        if(_GameWin == 1)
        {
            cout << "The player wins!" << endl;
        }

        if(_GameWin == 2)
        {
            cout << "The computer wins!" << endl;
        }
}
int main()
{
        TIC tic;
        cout << "Welcome to Tic Tac Toe!" <<endl<< endl;
        cout << "Please choose a grid to place (X): "<<endl<<endl;
        tic._Input();
    return 0;
}
