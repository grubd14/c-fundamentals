#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set the line color to blue
    setcolor(BLUE);

    // Draw a line from (50, 50) to (200, 200)
    line(50, 50, 200, 200);

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
