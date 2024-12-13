#include <stdio.h>
int main()
{

   float a, b, c, d;
   scanf("%f %f %f %f", &a, &b, &c, &d);
   float average;
   average=((a*2.0)+(b*3.0)+(c*4.0)+(d*1.0))/(2+3+4+1);
   printf("Media: %0.1f\n", average);
   if(average>=7.0){
        printf("Aluno aprovado.\n");
   }
   else if(average<5.0){
        printf("Aluno reprovado.\n");
   }
   else if(average>=5.0&&6.9>=average){
        printf("Aluno em exame.\n");
        float e;
        scanf("%f", &e);
        printf("Nota do exame: %0.1f\n", e);
        float average2;
        average2=(average+e)/2;
        if(average2>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1f\n", average2);
        }
        else if(average2<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1f\n", average2);
        }

   }



return 0;



}
