#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <courses.h>
#include <fcntl.h>

typedef struct {
    int x, y;
} POINT;

void clear_screen() {
    printf("\033[2J");
    printf("\033[0;0H");
}

void get_terminal_size(int *rows, int *cols) {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    *rows = w.ws_row;
    *cols = w.ws_col;
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void hide_cursor() {
    printf("\033[?25l");
}

void show_cursor() {
    printf("\033[?25h");
}

void init_point(POINT *p, int x, int y) {
    p->x = x;
    p->y = y;
}

void draw_point(POINT *p) {
    gotoxy(p->x, p->y);
    printf("*");
}

void clear_point(POINT *p) {
    gotoxy(p->x, p->y);
    printf(" ");
}

int random_int(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(NULL));

    int rows, cols;
    get_terminal_size(&rows, &cols);

    POINT head, tail, food;
    init_point(&head, cols / 2, rows / 2);
    init_point(&tail, cols / 2 - 1, rows / 2);
    init_point(&food, random_int(1, cols - 2), random_int(1, rows - 2));

    int score = 0;
    int dx = 1, dy = 0;

    int ch;
    while ((ch = getchar()) != 'q') {
        clear_point(&tail);
        draw_point(&head);

        tail.x = head.x;
        tail.y = head.y;

        switch (ch) {
            case 'w': dx = 0; dy = -1; break;
            case 's': dx = 0; dy = 1; break;
            case 'a': dx = -1; dy = 0; break;
            case 'd': dx = 1; dy = 0; break;
        }

        head.x += dx;
        head.y += dy;

        if (head.x == food.x && head.y == food.y) {
            score++;
            food.x = random_int(1, cols - 2);
            food.y = random_int(1, rows - 2);
        } else {
            for (POINT *p = &head; p->x != tail.x || p->y != tail.y; p = &tail) {
                p->x = p->x + dx;
                p->y = p->y + dy;
            }
        }

        draw_point(&food);

        usleep(50000);
        clear_point(&head);
    }

    clear_screen();
    show_cursor();
    return 0;
}
