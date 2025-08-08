#include<stdio.h>
#include<math.h>

int main(){
    float x;
    scanf("%f",&x);
    x = x* 3.1416 / 180.0;
    float ans = 2*pow(cos(x),2) - sqrt(3)*sin(x) + sin(x/2);
    printf("%f",ans);

    return 0;

}