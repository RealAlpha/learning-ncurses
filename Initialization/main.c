#include <ncurses.h>

int main()
{
	int ch;

	initscr();		// "Start" ncurses
	raw();			// Disable line buffering
	keypad(stdscr, TRUE);	// Also catch special keys including Fx & arrow keys
	noecho();		// Don't echo characters we get

	printw("Type any character to see it in italics");	// Ask the user for some input.
	ch = getch();		// Get inpput from the user
	
	clear();		// Clear the screen to avoid ugly text

	if (ch == KEY_F(2))
	{
		printw("F2 Key Got Pressed!");
	}

	else
	{
		// Print the character in italics
		attron(A_ITALIC);
		printw("%c", ch);
		attroff(A_ITALIC);
	}

	refresh();		// Ensure this get's printed to the screen

	getch();		// Wait for user input before closing down
	endwin();

	return 0;
}
