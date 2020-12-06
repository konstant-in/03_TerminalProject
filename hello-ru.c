#include <curses.h>
#include <locale.h>

int main (void)
{
        setlocale(LC_ALL, "");
        initscr ();
        move (LINES/2 - 1, COLS/2 - 4);
        addstr ("Привет, мир!");
        getch ();
        endwin ();
}
