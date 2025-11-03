//write a fucntion to find the gcd of 2 numbers (USING EUCLID ALGO)
#include<stdio.h>
/*remember the key property of Euclid’s Algorithm:

gcd(a, b) = gcd(b, a % b) — this always holds true, regardless of which number is bigger.

When a < b, the first step does this:

a % b simply gives a (since a is smaller than b)

Then the recursive call becomes gcd(b, a) — which swaps the numbers automatically.

So after one recursive call, a becomes the larger number and b becomes smaller.

✅ The algorithm self-corrects — no special handling needed!*/
int hcf(int a , int b){
    if(b==0) return a;
    else 
    return hcf(b,a%b);
    
    
    
}
int main(){
    int a , b ;
    printf("enter a and b ");
    scanf("%d %d ",&a,&b);
    printf("the gcd of %d and %d is %d",a , b ,hcf(a,b));
    return 0;
    
}
