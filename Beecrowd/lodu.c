#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define ROW 14
#define COL 14

void delay(int number_of_seconds)
{
    // Converting time into milli seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void display_lode_runner(char game_area[][COL])
{
    system("cls");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%c", game_area[i][j]);
        }
        printf("\n");
    }
}

int check_for_player(char game_area[][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (game_area[i][j] == 'P')
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    srand(time(0));
    char game_area[ROW][COL];
    int player_pos[ROW][COL] = {{0, 1}, {0, 2}, {0, 3}, {1, 1}, {1, 2}, {1, 3}, {2, 1}, {2, 2}, {2, 3}};
    int i, j, x, y, dx, dy;

    // Fill game area with random characters from the custom set
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1)
            {
                game_area[i][j] = '#';
            }
            else if (i == 1 && j == 1)
            {
                game_area[i][j] = 'P';
            }
            else
            {
                int r = rand() % 5;
                if (r == 0)
                {
                    game_area[i][j] = 'O';
                }
                else if (r == 1)
                {
                    game_area[i][j] = 'X';
                }
                else if (r == 2)
                {
                    game_area[i][j] = 'T';
                }
                else if (r == 3)
                {
                    game_area[i][j] = 'A';
                }
                else
                {
                    game_area[i][j] = ' ';
                }
            }
        }
    }

    display_lode_runner(game_area);

    while (1)
    {
        if (check_for_player(game_area) == 0)
        {
            printf("\n\nGame Over. Press any key to quit...");
            getch();
            exit(0);
        }

        printf("\nEnter your move: ");
        scanf("%d %d", &dx, &dy);

        // Update player position
        for (i = 0; i < ROW; i++)
        {
            for (j = 0; j < COL; j++)
            {
                if (game_area[i][j] == 'P')
                {
                    x = i;
                    y = j;
                }
            }
        }

        // Validate player's move
        if (dx == 1 && dy == 0 && x + dx < ROW && game_area[
