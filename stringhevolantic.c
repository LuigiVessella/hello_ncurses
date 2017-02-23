#include <stdio.h>
#include<ncurses.h>
#include<time.h>
int main(){
 struct timespec tempo;
 tempo.tv_sec=0;
 tempo.tv_sec=700*1000*1000;

 initscr();
 curs_set(0);

 mvaddstr(15,4, "Ciao\n");
 refresh();
 nanosleep(&tempo, NULL);

 mvaddstr(10,20, "Prof\n"); 
 refresh(); 
 nanosleep(&tempo, NULL);
 
 mvaddstr(5,4, "Tutto bene?\n"); 
 refresh();
 nanosleep(&tempo, NULL);
  
 refresh();


 getch();
 endwin();



return 0;
}
