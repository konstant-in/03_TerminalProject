#include <curses.h>

int main (void)
 {
        initscr ();
        move (LINES/2 - 1, COLS/2 - 4);
        addstr ("Hello, World!");
        getch ();
        endwin ();
}
