#include<iostream> 
#include <graphics.h>
using namespace std; 
  

void midPoint(int X1, int Y1, int X2, int Y2) 
{ 
    int dx = X2 - X1; 
    int dy = Y2 - Y1; 
  
    int d = dy - (dx/2); 
    int x = X1, y = Y1; 

    //cout << x << "," << y << "\n"; 
  
    while (x < X2) 
    { 
        x++; 
  
        if (d < 0) 
            d = d + dy; 
  
        else
        { 
            d += (dy - dx); 
            y++; 
        } 
  
      putpixel(x,y,GREEN);
    } 
    
} 
  
// Driver program 
int main() 
{ 
        int gd=DETECT,gm;
     initgraph (&gd, &gm, NULL);

  
    int X1 = 2, Y1 = 2, X2 = 100, Y2 = 100; 
    midPoint(X1, Y1, X2, Y2); 
    getch();
    closegraph();
    return 0; 
} 
