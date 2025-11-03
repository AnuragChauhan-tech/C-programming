#include<stdio.h>
int fact(int a  ){
    for(int i=0;i<=a;i++){
        int facto= 1;
        facto = facto*i;
        printf("the factorial is %d",facto);
        return facto;

    } 
    
}
int main(){
        int a ;
        printf("enter the number :");
        scanf("%d",&a);
        fact(a);
        return 0;

    }