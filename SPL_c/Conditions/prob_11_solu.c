#include<stdio.h>

int main(){
        
    float total;
    scanf("%f",&total);

    if(total>=90){
        printf("Grade: A");
    }
    else if(total>=86 && total<=89){
        printf("Grade: A-");
    }
    else if(total>=82 && total<=85){
        printf("Greade: B+");
    }
    else if(total>=78 && total<=81){
        printf("Grade: B");
    }
    else if(total>=74 && total<=77){
        printf("Grade: B-");
    }
    else if(total>=77 && total<=73){
        printf("Grade: C+");
    }
    else if(total>=66 && total<=69){
        printf("Grade: C");
    }
    else if(total>=62 && total<=65){
        printf("Grade: C-");
     }
    else if(total>=58 && total<=61){
        printf("Grade: D+");
    }
    else if(total>=55 && total<=57){
        printf("Grade: D");
    }
    else{
        printf("Grade: F");
    }

    return 0;
}