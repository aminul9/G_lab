#include <graphics.h>

// driver code
int main()
{
 
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // location of sides
    int left, top, right, bottom;

    // depth of the bar
    int depth;

    // top flag denotes top line.
    int topflag;

  
    bar3d(left = 150, 350-100,
    right = 190, bottom = 350,
    depth = 20, topflag = 1);

    bar3d(left = 220, 350- 120,
    right = 260, bottom = 350,
    depth = 20, topflag = 1);


    bar3d(left = 290, 350- 200,
    right = 330, bottom = 350,
    depth = 20, topflag = 1);

    // y axis line
    line(100, 50, 100, 350);

    line(90, 250, 110, 250);
    char p[]="1000";
    outtextxy(110,250,p);


    line(90, 230, 110, 230);
    char q[]="1200";
    outtextxy(110,230,q);


    line(90, 150, 110, 150);
    char r[]="1500";
    outtextxy(110,150,r);

    char y1[]="2016";

    outtextxy(190-30,360,y1);


    char y2[]="2018";

    outtextxy(260-30,360,y2);


    char y3[]="2020";

    outtextxy(330-30,360,y3);







    // x axis line
    line(100, 350, 400, 350);

    getch();


    closegraph();

    return 0;
}
