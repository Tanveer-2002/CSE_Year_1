#include<stdio.h>

int main(){

    int studentNum;
    scanf("%d",&studentNum);

    for(int i=1; i<=studentNum; i++){
        float A,HW,CT,MT,TF;
        scanf("%f %f %f %f %f",&A,&HW,&CT,&MT,&TF);

        float total = A+ HW+ CT+ (30*(MT/50))+ (40*(TF/100));

        if(total>=90){
            printf("Student %d: A\n",i);
        }
        else if(total>=86 && total<=89){
             printf("Student %d: A-\n",i);
        }
        else if(total>=82 && total<=85){
             printf("Student %d: B+\n",i);
        }
        else if(total>=78 && total<=81){
             printf("Student %d: B\n",i);
        }
        else if(total>=74 && total<=77){
             printf("Student %d: B-\n",i);
        }
        else if(total>=77 && total<=73){
             printf("Student %d: C+\n",i);
        }
        else if(total>=66 && total<=69){
             printf("Student %d: C\n",i);
        }
        else if(total>=62 && total<=65){
             printf("Student %d: C-\n",i);
        }
        else if(total>=58 && total<=61){
             printf("Student %d: D+\n",i);
        }
        else if(total>=55 && total<=57){
             printf("Student %d: D\n",i);
        }
        else{
             printf("Student %d: F\n",i);
        }

    }

    return 0;
}