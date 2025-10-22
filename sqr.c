#include<stdio.h>
#include<math.h>

int main(){
    int x , y ;
    printf("enter the base\n:");
    printf("enter the power:");
    scanf("%d %d",&x,&y);
    int power = pow(x,y);
    printf("%d",power);
    return 0;
}