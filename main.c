#include<stdio.h>
#include<graphics.h>

int main(){
    int midX, midY;
    int leftEyeX, righteyeX, eyeY;
    int noseX, noseY;
    int headRadius;
    int eyeNoseRadius;
    int smileRadius;
    int stepX, stepY;

    initwindow(500, 400, "Pirate - press key to close", 200, 150);

    midX = getmaxx()/2;
    midY = getmaxy()/2;
    headRadius = getmaxy()/4;
    circle (midX, midY, headRadius);

    getch();
    closegraph();
    return 0;
}