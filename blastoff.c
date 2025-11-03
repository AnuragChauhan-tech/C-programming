#include<stdio.h>
void blastoff(int a ){
    if(a==0){
        printf("BLAST OFF \n");
        return ;


    }
    printf("%d\n",a);
    blastoff(a-1);//recursive call

}
int main(){
    blastoff(5);
    return 0;
}
    

    