/******************************************************************************
 * Obfuscated C program to draw something on the screen
 * compile using: gcc -g -lncurses -O0 -o test test.c
 * Author: John van der Vuurst
 * Date:   2021-06-01
 *****************************************************************************/
#include <curses.h>
#include <stdlib.h>
#define Tas(t,a,v) t a=v
#define As(a,v) a=v
#define Lt(a,v) (a<v)
#define Gt(a,v) (a>v)
#define Et(a,v) (a==v)
#define A(a,b) (a+b)
#define S(a,b) (a-b)
#define Ic(a) As(a,A(a,1))
#define Dc(a) As(a,S(a,1))
#define I(c,a,e) if(c){a;}else{e;}
#define W(c,a) while(c){a}
#define F(t,v,b,e,a) for(Tas(t,v,b);Lt(v,e);Ic(v)){a;}
#define Se(a,v) As(a,v);
#define D(t,v) t v;
#define D0(t,v) t Se(v,0);
#define Df0(t,v) t Se(v,0.0);
#define Dis(a,v) D(int,a) Se(a,v)
#define Init() Dis(fbcc,0);
#define M(a,b) (a*b)
#define Sq(a) M(a,a)
#define Dst(a,b) A(Sq(a),Sq(b))
#define St(a) a;
#define Ba(a,b) ((a)&&(b))
#define Gz(a) Gt(a,0)
#define Ct(t,a) (t)a
#define Di(a,b) (a/b)
#define Dit(t,a,b) Di(Ct(t,a),Ct(t,b))
#define DFS(v,a) Df0(float,v) Se(v,a)
#define Ez(a) Et(a,0)
#define Oc(x,y,c) wmove(stdscr,y,x); waddch(stdscr,c); wrefresh(stdscr);
#define Bg() int main() { initscr(); cbreak(); noecho(); clear(); fprintf(stdout,"%dx%d",LINES,COLS);
#define Ed() getch(); endwin(); exit(0); }
#define Pg(a) Bg() a Ed()
#define Sc(a) I(Et(has_colors(),FALSE),endwin();exit(1);start_color();,Init() a)
#define Cc(f,b) init_pair(fbcc++,f,b);
#define Cp(c) COLOR_PAIR(c)
#define Uc(c,a) attron(Cp(c));a;attroff(Cp(c));
Pg(Sc(Cc(COLOR_BLACK,COLOR_BLACK) Cc(COLOR_BLACK,COLOR_RED) Cc(COLOR_BLACK,COLOR_BLUE) F(int,y,0,LINES, F(int,x,0,COLS, Df0(float,cx) Df0(float,cy) DFS(px,S(M(Dit(float,x,COLS),4.0),2.0)) DFS(py,S(M(Dit(float,y,LINES),4.0),2.0)) D0(int,cnt) Se(cnt,100) W( Ba(Lt(Dst(cx,cy),4.0),Gz(cnt)), Df0(float,tx) Df0(float,ty) Se(tx,A(S(Sq(cx),Sq(cy)),px)) Se(ty,A(M(M(cx,cy),2),py)) Se(cx,tx) Se(cy,ty) St(Dc(cnt))) I(Ez(cnt), Uc(0,Oc(x,y,'#')), DFS(i,Di(Dst(cx,cy),8.0)) I(Gt(i,2), Uc(2,Oc(x,y,' ')), Uc(1,Oc(x,y,'.'))))))))
