#include <graphics.h>
#include <iostream>

// driver code
int main()
{
   
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    int for_one_persion=360/5;

    int for_singlesister=for_one_persion/2;


    //forsister1
   setfillstyle(SOLID_FILL,0);
	pieslice(300, 300, 0, for_singlesister, 100);
             //setfillstyle(SOLID_FILL,GREEN);

    //forsister2
       setfillstyle(SOLID_FILL,1);

    pieslice(300, 300, for_singlesister,for_singlesister+for_singlesister, 100);


    //forbrother one
   setfillstyle(SOLID_FILL,2);
         pieslice(300, 300, for_one_persion,for_one_persion*2, 100);

    //forbrother two
   setfillstyle(SOLID_FILL,3);
         pieslice(300, 300, for_one_persion*2,for_one_persion*3, 100);
    //forbrother three
   setfillstyle(SOLID_FILL,4);
         pieslice(300, 300, for_one_persion*3,for_one_persion*4, 100);

     //forbrother four
        setfillstyle(SOLID_FILL,5);

     // setfillstyle(SOLID_FILL,RED);
         pieslice(300, 300, for_one_persion*4,for_one_persion*5, 100);









    getch();

 
    closegraph();

    return 0;
}
