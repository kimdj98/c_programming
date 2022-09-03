#include <stdio.h>
#include <stdbool.h>


// fuction prototypes
bool checkForWin();
void drawBoard();
void player1_take_turn();
void player2_take_turn();

// global variables
char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
enum players {PLAYER1, PLAYER2};
enum players winner;

// Algorithm for playing game
int main ()
{
    int count = 0;
    while ((checkForWin() == false) && (count < 9))
    {
        drawBoard();
        player1_take_turn();
        count++; // count the count to check end of the game
        if (checkForWin() == true) {
            winner = PLAYER1;
            printf("winner is PLAYER%d\n", winner+1);
            break;
        } else if (count == 9) {
            printf("The game ended as a draw.");
            break;
        }

        drawBoard();
        player2_take_turn();
        count++; // count the count to check end of the game
        if (checkForWin() == true) {
            winner = PLAYER2;
            printf("winner is PLAYER%d", winner+1);
            break;
        }
    }

}

bool checkForWin()
{
    // for row bingo
    if ((board[1] == board[2]) && (board[2] == board[3])) {
        return true;
    } else if ((board[4] == board[5]) && (board[5] == board[6])) {
        return true;
    } else if ((board[7] == board[8]) && (board[8] == board[9])) {
        return true;
    } else if ((board[1] == board[4]) && (board[4] == board[7])) {
        return true;
    } else if ((board[2] == board[5]) && (board[5] == board[8])) {
        return true;
    } else if ((board[3] == board[6]) && (board[6] == board[9])) {
        return true;
    } else if ((board[1] == board[5]) && (board[5] == board[9])) {
        return true;
    } else if ((board[3] == board[5]) && (board[5] == board[7])) {
        return true;
    } else {
        return false;
    }
}

void drawBoard()
{
    system("clear");

    printf("\n\n---------Tic - Tac - Toe----------\n\n");

    printf("\t ___ ___ ___\n");
    printf("\t|   |   |   |\n");
    printf("\t| %c | %c | %c |\n", board[1], board[2], board[3]);
    printf("\t|___|___|___|\n");
    printf("\t|   |   |   |\n");
    printf("\t| %c | %c | %c |\n", board[4], board[5], board[6]);
    printf("\t|___|___|___|\n");
    printf("\t|   |   |   |\n");
    printf("\t| %c | %c | %c |\n", board[7], board[8], board[9]);
    printf("\t|___|___|___|\n");
}


// Player1 mark as X
void player1_take_turn()
{
    int mark;
    printf("Player1's turn: ");
    scanf("%i", &mark);
    printf("\n");
    while (board[mark] == 'X' || board[mark] == 'O') {
        printf("You should mark empty spot.\n\n");
        printf("Player1's turn: ");
        scanf("%i", &mark);
        printf("\n");
    }
    board[mark] = 'X';
}

// Player2 marks as O
void player2_take_turn()
{
    int mark;
    printf("Player2's turn: ");
    scanf("%i", &mark);
    printf("\n");
    while (board[mark] == 'X' || board[mark] == 'O') {
        printf("You should mark empty spot.\n\n");
        printf("Player2's turn: ");
        scanf("%i", &mark);
        printf("\n");
    }
    board[mark] = 'O';
}

