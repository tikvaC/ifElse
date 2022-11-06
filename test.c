#include <stdio.h>
int main()
{
    float age;
    scanf("%f", &age); 
    if(age >= 18){
        printf("u can vote");
    }else{
        printf("sorry, u can't vote");
    }
    return 0;
}
