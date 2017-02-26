#include <stdio.h>
#include<ncurses.h>
#include<time.h>
int main(){
 struct timespec time;
 time.tv_sec=0;
 time.tv_nsec=700*1000*1000;

 initscr();
 curs_set(0);

 mvaddstr(15,4, "Ciao");
 refresh();
 nanosleep(&time, NULL);

 mvaddstr(10,20, "Prof"); 
 refresh(); 
 nanosleep(&time, NULL);
 
 mvaddstr(5,4, "Tutto bene?"); 
 refresh();
 nanosleep(&time, NULL);
  
 getch();
 endwin();

return 0;
}
