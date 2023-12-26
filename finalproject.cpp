#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <random>
#include<windows.h>
#include<time.h>
#include<conio.h>
#define H 22
#define W 22
#define N 9
#include <ctime>


using namespace std;

//for TicTacToe
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
//

class security{
private:
    string name;
    long int password;
public:
    void setData(long int p,string n){
       password=p;name=n;

    }
    string getName()
	{
		return name;
	}

   long int getPassword()
	{
		return password;
	}

};

void TicTacToe()
{
    system("Title RockPaperScissor Game @Gaming Duniya");
    system("color A0");
	int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
}
//CHECKING WINNING STATUS FOR TICTACTOE GAME
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}
//DRAWING BOARD FOR TICTACTOE GAME
void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
//CODE FOR ROCK PAPER SCISSOR
//RULE FOR ROCK PAPER SCISSOR GAME
int rule(char p, char c){
    if (p == c){
        return 0;
    }

    if (p == 'r' && c == 'p'){
        return -1;
    }
    else if (p == 's' && c == 'p'){
        return 1;
    }
    else if (p == 'p' && c == 'r'){
        return 1;
    }
    else if (p == 's' && c == 'r'){
        return -1;
    }
    else if (p == 'r' && c == 's'){
        return 1;
    }
    else if (p == 'p' && c == 's'){
        return -1;
    }
}


void RockPaperScissor(){
    system("Title RockPaperScissor Game @Gaming Duniya");
    system("color D0");

    char computer;
    char player;
    char playmore;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Welcome to Rock, Paper and Scissors Game" << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Note: " << endl;
    cout << "\t\t\t\t";
    cout << "\t\t r : rock" << endl << "\t\t\t\t" << "\t\t p : paper" << endl << "\t\t\t\t " << "\t\t s: scissor" << endl << "\t\t\t\t"<< endl << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    do{
        int number = 0;
        srand(time(0));        // initialized time to 0
        number = rand() % 100; // will choose a number in range 0 - 99
        // r - for rock
        // p - for paper
        // s - for scissors
        if (number < 33)
        {
            computer = 'r';
        }
        else if (number > 66)
        {
            computer = 's';
        }
        else
        {
            computer = 'p';
        }
        // cout << "Note: \"r\" for \"Rock\", \"p\" for \"Paper\", \"s\" for \"Scissor\"." << endl;
        cout << "\t\t\t\t";
        cout << "Enter your choice: ";
        cin >> player;
        if(player!='r'&&player!='s'&&player!='p'){
                cout<<"Wrong choice !!!! Enter Again"<<endl;
            continue;
        }
        cout<<"\t\t\t\t"<<"Computer's Choice "<<computer;
        int result = rule(player, computer);
        if(result == 1){
            cout <<endl<< "\t\t\t\t";
            cout << "You won! Hurray" << endl;
        }
        else if(result == -1){
            cout <<endl<< "\t\t\t\t";
            cout << "You lose! Bad Luck" << endl;
        }
        else{
            cout <<endl<< "\t\t\t\t";
            cout << "Woah! That's Tie!" << endl;
        }
        cout << "\t\t\t\t";
        cout << "Do you want to Play Again?" << endl;
        cout << "\t\t\t\t";
        cout << "Note: Press 'n' to exit! Press Anything to continue: ";
        cin >> playmore;
        cout << "\t\t\t\t";
        for(int i = 0; i < 50; i++){
            cout << "-";
        }
        cout << endl;
    }while(playmore != 'n');

}
//ROCK PAPER SCISSOR DONE

//code for snake game
class chessboard
{
public:
    char qp[H][W];
    int i,j,x1,y1;
    chessboard();
    void food();
    void prt(int grade,int score,int gamespeed);
 };
chessboard::chessboard()
{
    for(i=1;i<=H-2;i++)
        for(j=1;j<=W-2;j++)
            qp[i][j]=' ';
    for(i=0;i<=H-1;i++)
        qp[0][i] = qp[H-1][i] = '#';
    for(i=1;i<=H-2;i++)
        qp[i][0] = qp[i][W-1] = '#';
    food();
}
void chessboard::food()
{
    srand(time(0));
    do
    {
        x1=rand()%W-2+1;
        y1=rand()%H-2+1;
    }
    while(qp[x1][y1]!=' ');
    qp[x1][y1]='$';
}
void chessboard::prt(int grade,int score,int gamespeed)
{
    system("cls");
    cout << endl;
    for(i=0;i<H;i++)
    {
        cout << "\t";
        for(j=0;j<W;j++)
            cout<<qp[i][j]<<' ';
        if(i==0) cout << "\tGrade:" << grade;
        if(i==2) cout << "\tScore:" << score;
        if(i==4) cout << "\tAutomatic forward";
        if(i==5) cout << "\ttime interval:" << gamespeed << "ms";
        cout<<endl;
    }
}
class snake:public chessboard
{
public:
    int zb[2][100];
    long start;
    int head,tail,grade,score,gamespeed,length,timeover,x,y;
    char direction;
    snake();
    void move();
 };
snake::snake()
{
    cout<<"\n\n\t\tThe game is about to begin!"<<endl;
    for(i=3;i>=0;i--)
    {
        start=clock();
        while(clock()-start<=1000);
        system("cls");
        if(i>0)
        cout << "\n\n\t\tCountdown:" << i << endl;
    }
    for(i=1;i<=3;i++)
        qp[1][i]='*';
    qp[1][4]='@';
    for(i=0; i<4; i++)
    {
        zb[0][i] = 1;
        zb[1][i] = i + 1;
    }
}
void snake::move()
{
    score=0;
    head = 3,tail = 0;
    grade = 1, length = 4;
    gamespeed = 500;
    direction = 77;
    while(1)
    {
        timeover = 1;
        start = clock();
        while((timeover=(clock()-start<=gamespeed))&&!kbhit());
        if(timeover)
        {
            getch();
            direction = getch();
        }
        switch(direction)
        {
        case 72: x= zb[0][head]-1; y= zb[1][head];break;
        case 80: x= zb[0][head]+1; y= zb[1][head];break;
        case 75: x= zb[0][head]; y= zb[1][head]-1;break;
        case 77: x= zb[0][head]; y= zb[1][head]+1;break;
        }
        if(x==0 || x==21 ||y==0 || y==21)
        {
            cout << "\tGame over!" << endl;break;
        }
        if(qp[x][y]!=' '&&!(x==x1&&y==y1))
        {
            cout << "\tGame over!" << endl;break;
        }
        if(x==x1 && y==y1)
        {
            length ++;
            score=score+100;
            if(length>=8)
            {
                length -= 8;
                grade ++;
                if(gamespeed>=200)
                    gamespeed = 550 - grade * 50;
            }
            qp[x][y]= '@';
            qp[zb[0][head]][zb[1][head]] = '*';
            head = (head+1)%100;
            zb[0][head] = x;
            zb[1][head] = y;
            food();
            prt(grade,score,gamespeed);
        }
        else
        {
            qp[zb[0][tail]][zb[1][tail]]=' ';
            tail=(tail+1)%100;
            qp[zb[0][head]][zb[1][head]]='*';
            head=(head+1)%100;
            zb[0][head]=x;
            zb[1][head]=y;
            qp[zb[0][head]][zb[1][head]]='@';
            prt(grade,score,gamespeed);
        }
    }
}
void SnakeGame(){
    system("Title Snake Game @Gaming Duniya");
    system("color E0");

chessboard cb;
    snake s;
    s.move();
}
//snake game done

//code for sudoko
bool isSafe(int board[N][N], int row, int col, int num) {
    if(num>9){
        return false;
    }
    // Check if 'num' is already in the same row
    for (int i = 0; i < N; i++)
        if (board[row][i] == num)
            return false;

    // Check if 'num' is already in the same column
    for (int i = 0; i < N; i++)
        if (board[i][col] == num)
            return false;

    // Check if 'num' is already in the same 3x3 box
    int boxRowStart = row - row % 3;
    int boxColStart = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + boxRowStart][j + boxColStart] == num)
                return false;

    return true;
}

void printBoard(int grid[N][N]) {

    system("cls");
    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                        WELCOME TO SUDOKU Game!                                 |" << endl;
    cout << "\t\t\t|       Fill in the missing numbers(represented by 0) to solve the puzzle.       |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;
    for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
         if(col == 3 || col == 6)
            cout << " | ";
         cout << grid[row][col] <<" ";
      }
      if(row == 2 || row == 5){
         cout << endl;
         for(int i = 0; i<N; i++)
            cout << "---";
      }
      cout << endl;
   }
}


bool solveSudoku(int board[N][N], int row, int col) {
    // If all cells are filled, the puzzle is solved
    if (row == N - 1 && col == N)
        return true;

    // Move to the next row if the current column is N
    if (col == N) {
        row++;
        col = 0;
    }

    // Skip the cells that already have a value
    if (board[row][col] != 0)
        return solveSudoku(board, row, col + 1);

    // Try filling the current cell with a number from 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board, row, col + 1))
                return true;

            board[row][col] = 0;
        }
    }
    return false;
}

bool isSolvedCompletely(int grid[N][N]){
    for (int row = 0; row < N; row++)
        for (int col = 0; col < N; col++)
            if (grid[row][col] == 0)
                return false;

    return true;
}

void playGame(int board[N][N]){
    int ch;
    int row, col, num;
    while(true){
        printBoard(board);
        cout << endl << endl;
        cout << "Unable to solve? Enter -1 as row, col and num to view the solved sudoku."<<endl;
        cout << "Enter row: ";
        cin >> row;
        cout << "Enter column: ";
        cin >> col;
        cout << "Enter number: ";
        cin >> num;

        if(row == -1 || col == -1 || num == -1){
            solveSudoku(board, 0, 0);
            printBoard(board);
            cout << endl;
            cout << "Better luck next time!!!" << endl;
            return;
        }
        if (isSolvedCompletely(board))
            break;
        row--;
        col--;
        if (!isSafe(board, row, col, num)) {
            cout << "Invalid move. Try again." << endl;
            continue;
        }
        board[row][col] = num;
    }

    // Check if the user has solved it correctly or not
    bool solved = true;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 0) {
                solved = false;
                break;
            }
        }
    }

    if (solved) {
        cout << "Congratulations! You have solved the puzzle." << endl;
        printBoard(board);
    }
    else {
        cout << "Puzzle not solved. Better luck next time." << endl;
    }

}

void Sudoko(){
system("Title Sudoku Game @Gaming Duniya");
    system("color B0");
    int board[N][N] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}
    };

    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                        WELCOME TO SUDOKU Game!                                 |" << endl;
    cout << "\t\t\t|       Fill in the missing numbers(represented by 0) to solve the puzzle.       |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;

    while (true) {

        int choice;
        cout << endl << endl;
        cout << "\t\t[1] Solve the Sudoku" << endl;
        cout << "\t\t[2] Unable to solve? View the solved Sudoku" << endl;
        cout << "\t\t[3] Exit" << endl;
        cout << "\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                playGame(board);
                break;
            case 2:
                if (solveSudoku(board, 0, 0))
                {
                    cout << "Completely Solved Sudoku is: "<< endl;
                    cout << endl << endl;
                    for (int row = 0; row < N; row++){
                        for (int col = 0; col < N; col++){
                            if(col == 3 || col == 6)
                                cout << " | ";
                            cout << board[row][col] <<" ";
                        }
                        if(row == 2 || row == 5){
                            cout << endl;
                            for(int i = 0; i<N; i++)
                                cout << "---";
                        }
                        cout << endl;
                    }
                    cout << endl;
                    cout << "Better luck next time!!!" << endl;
                }
                else
                    cout << "No solution found" << endl;
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }

}}
//WORD GUESSING GAME CODE-
int random(int a, int b)
{
    thread_local mt19937 eng{random_device{}()};
    uniform_int_distribution<int> dist(a, b);
    return dist(eng);

}

string randomWord(){
	string words[] = {"India","Pakistan","Nepal","Malaysia","Philippines","Australia","Iran","Ethiopia","Oman","Indonesia"};
    cout << random(0, 9);
	return words[random(0, 9)];
}

int letterFill(char guess, string secretword, string &guessword){
    int matches=0;
    int len = secretword.length();

    for (int i = 0; i < len; i++)
    {
        // Did we already match this letter in a previous guess?
        if (guess == guessword[i]) return 0;

        // Is the guess in the secret word?
        if (guess == secretword[i]){
            guessword[i] = guess;
            matches++;
        }
    }
    return matches;
}

void WordGuessing(){
system("Title Word Guessing @Gaming Duniya");
    system("color B0");
int tries = 6;
	string letter = "";
	string word = randomWord();
	string unknown(word.length(), '_');
	cout << "Random word has been generated! Word is " << word.length() << " letters long!" << endl;
	while (tries > 0){
		cout << unknown << endl;
        	char letter;
		cin >> letter;
		if (letterFill(letter, word, unknown) == 0){
			cout << "Could not find " << letter << " in the word." << endl;
			tries--;
		}
		else {
			cout << "Found letter! " << endl;
		}

		cout << "Guess a letter, you have " << tries << " left." << endl;

		if (word == unknown)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
            return;
		}
	}
	cout << endl << "Sorry, you lose...you've been hanged." << endl;
	cout << "The word was : " << word << endl;
}


 int main()

 {
   system("Title Gaming @Gaming Duniya");
    system("color A0");

  string name;
  long int password;
  	int choice;

	system("cls");

	// created User ( object )
	security user1;
	// Set User Details ( into object )         ( Setting Default Data )
	user1.setData(987654321, "sakshi");


	do
	{
		system("cls");

   cout<<"Enter sakshi as Name and 987654321 as Password"<<endl;
    cout << endl << "Enter Your Name ";	  // asking user to enter account no
		cin >> name;

		cout << endl << "Enter Password ";				 // asking user to enter PIN
		cin >> password;

		if ((name == user1.getName()) && (password == user1.getPassword()))
		{
			do
			{
				system("cls");
			cout << "\t\t\t\t";
        for(int i = 0; i < 50; i++){
        cout << "-";
         }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Welcome to Sakshi's Gaming Duniya\t" << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
     cout << "\t\t\t\t";
				cout << endl << "Select Your Favourite Game!! ";
				cout << endl << "1. TicTacToe";
				cout << endl << "2. Rock Paper Scissor";
				cout << endl << "3. Snake Game";
				cout << endl << "4. Sudoko";
				cout << endl << "5. Word Guessing";
				cout << endl << "6. Exit" << endl;

				cin >> choice;

				switch (choice)						// switch condition
				{
				case 1:system("cls");
					cout << endl << "!!!!!!!TicTacToe!!!!!!!" ;
					TicTacToe();
					_getch();
             		break;


				case 2:system("cls");
            		RockPaperScissor();
            		_getch();
					break;


				case 3:system("cls");
					cout << endl << "!!!!!!!Snake Game!!!!!!!";
            		SnakeGame();
            		_getch();
					break;


				case 4:system("cls");

            		Sudoko();
            		_getch();
					break;

                case 5:system("cls");
                    cout << endl << "!!!!!!!Word Guessing!!!!!!!"<<endl;
            		WordGuessing();
            		_getch();
					break;


				case 6:exit(0);

				default:							// handle invalid user inputs
					cout << endl << "Enter Valid Data !!!";
				}

			} while (1);				  // condition will always TRUE and loop is										capable of running infinite times
		}

		else
		{
			cout << endl << "User Details are Invalid !!! ";
			_getch();
		}
	} while (1);						// condition will always TRUE and loop is										capable of running infinite times

	return 0;
}





























