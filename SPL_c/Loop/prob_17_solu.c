#include <stdio.h>

int main() {
    int num, i, flag = 1;
    scanf("%d", &num);

    if(num <= 1) {
        flag = 0;
    }
    else{
        for (i = 2; i <= num / 2; i++) {
            if(num % i == 0){
                flag = 0; 
                break;
            }
        }
    }

    if (flag){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }

    return 0;
}
