#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>

#define MAX_N 19
#define DRAW_BLACK printf("○")
#define DRAW_WHITE printf("●")
#define WHITE 2
#define BLACK 1

void gotoxy(int x, int y);

int board[MAX_N][MAX_N] = {0};

void drawInit();
int drawStone(int y, int x, int stone);
void inputCode(int *y, int *x);
int checkFinish(int t);
void gotoInput();

int main()
{
    CONSOLE_CURSOR_INFO cursorInfo = {
        0,
    };
    cursorInfo.bVisible = 0;
    cursorInfo.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

    drawInit();
    int x, y, i = 1;
    for (;;)
    {
        inputCode(&y, &x);
        i += drawStone(y, x, (i) % 2 + 1);
        if (int c = checkFinish(0))
        {
            gotoInput();
            printf("GAME OVER.. ");
            if (c == WHITE)
                printf("WHITE "), DRAW_WHITE;
            else if (c == BLACK)
                printf("BLACK "), DRAW_BLACK;
            printf(" WIN!!! ");
            break;
        }
    }

    _getch();
    return 0;
}

int checkFinish(int t)
{
    if (t == MAX_N * MAX_N)
        return 0;
    int x = t % MAX_N;
    int y = t / MAX_N;
    int color = board[y][x];
    int dir[3] = {0};
    for (int i = 0; i < 5 && color != 0; i++)
    {
        if (x + i < MAX_N && color == board[y][x + i])
            dir[0]++;
        if (y + i < MAX_N && color == board[y + i][x])
            dir[1]++;
        if (x + i < MAX_N && y + i < MAX_N && color == board[y + i][x + i])
            dir[2]++;
    }
    for (int i = 0; i < 3; i++)
        if (dir[i] == 5)
            return color;
    return checkFinish(t + 1);
}

void inputCode(int *y, int *x)
{
    gotoInput();
    printf("Input Coordinate (A19): ");
    char s[10];
    gets_s(s, sizeof(s));
    *x = s[0] - 'A';
    if (strlen(s) > 3)
        return;
    if (strlen(s) == 3)
        *y = (s[1] - '0') * 10 + s[2] - '0' - 1;
    else if (strlen(s) == 2)
        *y = s[1] - '0' - 1;
    else
        *y = *x = -1;
    gotoInput();
    printf("Input Coordinate (A19): \t\t\t");
    return;
}

int drawStone(int y, int x, int stone)
{ // stone이 1이면 흑, 2면 백
    if (board[y][x] || x < 0 || x >= MAX_N || y < 0 || y >= MAX_N)
        return 0;
    gotoxy(x, y);
    if (stone == BLACK)
    {
        DRAW_BLACK;
        board[y][x] = BLACK;
    }
    else if (stone == WHITE)
    {
        DRAW_WHITE;
        board[y][x] = WHITE;
    }
    else
        return 0;
    return 1;
}

void drawInit()
{
    gotoxy(0, 0);
    for (int i = 0; i < MAX_N; i++)
    {
        for (int j = 0; j < MAX_N; j++)
        {
            gotoxy(j, i);
            if (i == 0)
            {
                if (j == 0)
                    printf("┌");
                else if (j == MAX_N - 1)
                    printf("┐");
                else
                    printf("┬");
            }
            else if (j == 0)
            {
                if (i == MAX_N - 1)
                    printf("└");
                else
                    printf("├");
            }
            else if (j == MAX_N - 1)
            {
                if (i == MAX_N - 1)
                    printf("┘");
                else
                    printf("┤");
            }
            else if (i == MAX_N - 1)
            {
                printf("┴");
            }
            else
                printf("┼");
        }
        printf("\n");
    }
    for (int i = 0; i < MAX_N; i++)
    {
        gotoxy(MAX_N, i);
        printf("%d", i + 1);
        gotoxy(i, MAX_N);
        printf("%c", i + 'A');
    }
    gotoInput();
    printf("fin.");
}

void gotoxy(int x, int y)
{
    COORD pos = {static_cast<SHORT>(x * 2), static_cast<SHORT>(y)};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gotoInput()
{
    gotoxy(21, 20);
}