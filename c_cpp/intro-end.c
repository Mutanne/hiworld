#include<ncurses.h>
#define time 300000

int main(int argc, char *argv[]){
	initscr();
	noecho();
	curs_set(FALSE);
	
	printw(0,0,".---.                 .--.                        \n   /           .-`-.  |   :                       \n  /  .-. .--..' .-. `.|   | .-. .--. .-...  . .-. \n /  (.-' |   | (   ) ;|   ;(.-' |  |(   ||  |(.-' \n'---'`--''   `. `-'`' '--'  `--''  `-`-`|`--`-`--'\n               `---                  ._.' ");
	printw("hi\n");
	refresh();
	usleep(time);
	
	endwin();
	return 0;
}