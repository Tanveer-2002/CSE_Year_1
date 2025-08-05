#include<stdio.h>

int main(){
    int num;
    float sum;
    scanf("%d",&num);

    for(int i=0; i<num; i++){
        float x;
        scanf("%f",&x);

        sum += x;
    }

    printf("AVG of %d intputs: %f",num,sum/num);

    return 0;

}
