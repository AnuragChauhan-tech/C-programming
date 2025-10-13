//sum of elements of array 
#include <stdio.h>
int main(){
    printf("enter the elements of array:");
    int i, number[5];

    for(i=0;i<5;i++){
        scanf("%d",&number[i]);

    }
    int sum=0;
    for(i=0;i<5;i++){
        sum += number[i];

    }
    printf("the sum is %d\n",sum);
    return 0;
}