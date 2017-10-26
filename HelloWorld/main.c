#include <ncurses.h>

int main(void)
{
	initscr();		// Initialize the terminal in curses mode
	printw("Hello, world!");// Print the Hello, world! string.
	refresh();		// Refresh the screen to show
	getch();		// Wait for user input
	endwin();		// Exit curses mode

	return 0;		// Return 0 - everything went well
}
