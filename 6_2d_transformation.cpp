#include<iostream>  
#include<graphics.h>  
#include <cmath>
using namespace std;

void scalling()
{
    int x1=60,y1=10,x2=100,y2=10;
    line(x1,y1,x2,y2);
    char T[]="After scalling 2x";
    outtextxy(x1,y1+10,T);

    int haf=(x2-x1)/2;
     line(x1-haf,y1+40,x2+haf,y2+40);

}

void translation()
{
    int top=200,left=10,right=300,bottom=40;
    rectangle(top,left,right,bottom);
    char T[]="After translation Rectangle";
    outtextxy(200,left+50,T);
    int move=100;
     rectangle(top,left+move,right,bottom+move);




}

void rotation()
{
     float x1=100, y1=200,x2=200,y2=200,angle=45,c,s;
        line(x1,y1,x2,y2);  


    c = cos(angle *3.14/180);  
    s = sin(angle *3.14/180);  
    //x1 = floor(x1 * c + y1 * s);  
   // y1 = floor(-x1 * s + y1 * c);  
    x2 = floor(x2 * c + y2 * s);  
    y2 = floor(-x2 * s + y2 * c);  

    
    x2=abs(x2);
    y2=abs(y2);
  line(x1,y1,x2,y2);




    


    
}



int main()  
{  
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);

    

    scalling();
    translation();
    rotation();

    getch();
    closegraph();
    return 0;  
} 
