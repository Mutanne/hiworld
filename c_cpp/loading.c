#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>

int main() {
    int row, col;

    initscr();
    getmaxyx(stdscr, row, col);
    char loading[] = "-\\|/";
    while (1) {
        for (int i = 0; i < 8; i++) {
            mvaddch(row/2, col/2, loading[i%4]);
            refresh();
            usleep(100000);
            mvaddch(row/2, col/2, '\b');
        }
    }

    endwin();
    return 0;
}