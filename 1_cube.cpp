#include <iostream>
#include <graphics.h>

int main()
{
     int gd = DETECT, gm; 
     initgraph(&gd, &gm,NULL); 
     // initgraph(&gd, &gm,""); 
     setcolor(RED);
  
    int left=200,top=50,right=400,down=250;
    rectangle(left,top,right,down);

    line(left,top,left+50,top+50);
    line(right,top,right+50,top+50);

    line(left,down,left+50,down+50);
    line(right,down,right+50,down+50);
    rectangle(left+50,top+50,right+50,down+50);


     setcolor(GREEN);

    left=460,top=310,right=500,down=350;
    rectangle(left,top,right,down);
    line(left,top,left+20,top+20);
    line(right,top,right+20,top+20);

    line(left,down,left+20,down+20);
    line(right,down,right+20,down+20);
    rectangle(left+20,top+20,right+20,down+20);



      
     

    

    getch();
    closegraph();
    return 0;
}
