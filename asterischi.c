#include<stdio.h>
#include<time.h>
#include<ncurses.h>

int main(){

struct timespec tempo;

tempo.tv_sec=0;
tempo.tv_nsec=700*1000*1000;

initscr();
curs_set(0);

mvaddstr(3,3, "*");
refresh();
nanosleep(&tempo, NULL);
mvaddstr(3,3, " ");
refresh();
nanosleep(&tempo, NULL);

mvaddstr(3,3, "*");
refresh();
nanosleep(&tempo, NULL);
mvaddstr(3,3, " ");
refresh();
nanosleep(&tempo, NULL);

mvaddstr(3,3, "*");
refresh();
nanosleep(&tempo, NULL);
mvaddstr(3,3, " ");
refresh();
nanosleep(&tempo, NULL);

mvaddstr(3,3, "*");
refresh();
nanosleep(&tempo, NULL);
mvaddstr(3,3, " ");
refresh();
nanosleep(&tempo, NULL);

mvaddstr(3,3, "*");
refresh();
nanosleep(&tempo, NULL);
mvaddstr(3,3, " ");
refresh();
nanosleep(&tempo, NULL);

getch();
endwin();


return 0;
}
