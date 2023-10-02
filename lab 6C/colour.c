
#include<stdio.h>

void main(){

    int r,g,b;
    float w,c,m,y,bl;
    
    printf("Enter the values of R, G and B: ");
    scanf("%d %d %d", &r, &g, &b);
    
    w = (float) fmax(r/255.0, fmax(g/255.0, b/255.0));
    c = (w - (float)r/255.0)/w;
    m = (w - (float)g/255.0)/w;
    y = (w - (float)b/255.0)/w;
    bl = 1.0 - w;
    
    printf("%fCyan: %fMagenta: %fYellow: %fBlack:", c, m, y, bl);

}
