#include <stdio.h>
int main()
{
    float h;
    scanf("%f", &h); 
    float w;
    scanf("%f", &w); 
    if(h == w){
        printf("square");
    }else{
        printf("rectangle");
    }
    return 0;
}
