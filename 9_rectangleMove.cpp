#include<stdio.h>
#include<graphics.h>
#include<string.h>
int main()
{

	//THis code author is  from Biplob 154037
  //THis code author is  from Biplob 154037
  //THis code author is  from Biplob 154037, I am just collect It
	int s,x1,y1,x2,y2,xmax,xmin,ymax,ymin,i;
	//settextstyle(SOLID_FILL,HORIZ_DIR,1);

  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);

	int ty1=20;
	xmin=200;ymin=200;
	xmax=300;ymax=300;
	setcolor(WHITE);
	rectangle(xmin,ymin,xmax,ymax);
	x1=xmin;x2=xmax;
    y1=ymin;y2=ymax;
	while(1)
	{
        char c=getch();
        switch(c)
        {
            case '8':
            {
                setcolor(BLACK);
                rectangle(x1,y1,x2,y2);
                x1=x1;x2=x2;
                y1=y1-ty1;y2=y2-ty1;
                setcolor(WHITE);
                rectangle(x1,y1,x2,y2);

                break;
            }
            case '6':
            {
                setcolor(BLACK);
                rectangle(x1,y1,x2,y2);
                x1=x1+ty1;x2=x2+ty1;
                y1=y1;y2=y2;
                setcolor(BLACK);
                rectangle(xmin,ymin,xmax,ymax);
                setcolor(WHITE);
                rectangle(x1,y1,x2,y2);
                break;
            }
            case '2':
            {   setcolor(BLACK);
                rectangle(x1,y1,x2,y2);
                x1=x1;x2=x2;
                y1=y1+ty1;y2=y2+ty1;
                setcolor(WHITE);
                rectangle(x1,y1,x2,y2);

                break;
            }
            case '4':
            {   setcolor(BLACK);
                rectangle(x1,y1,x2,y2);
                x1=x1-ty1;x2=x2-ty1;
                y1=y1;y2=y2;
                setcolor(WHITE);
                rectangle(x1,y1,x2,y2);

                break;
            }
            case '5':
            {
                  closegraph();
            }
        }
	}
	return 0;
}
