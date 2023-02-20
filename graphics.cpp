
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a line
    setcolor(RED);
    line(100, 100, 200, 200);
    // Draw a rectangle

    setfillstyle(SOLID_FILL, YELLOW);
    bar(250, 150, 350, 250);
    // Draw an ellipse
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(450, 200, 50, 100);

    // Draw a circle
    setcolor(MAGENTA);
    setfillstyle(SOLID_FILL, CYAN);
    fillcircle(600, 200, 50);

    getch();
    closegraph();
    return 0;
}