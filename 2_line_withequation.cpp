#include <iostream>
#include <graphics.h>


using namespace std;

int main()
{
    int gm=DETECT,gd;
    //initgraph(&gm,&gd,NULL);
    initgraph(&gm,&gd,"");
    int x1,y1,x2,y2,c=5;
    x1=100,y1=100,x2=400,y2=400;
    double m=(y1-y2)/((x1-x2)*1.0);
    for(int x=x1;x<=x2;x++)
    {
        int y=(m*x)+c;
        putpixel(x,y,BLUE);
        putpixel(x+10,y,GREEN);

    }


    getch();
    closegraph();
    return 0;
}
