#include<stdio.h>

int main ()
{
    int m;
        printf("\n Enter any percentage:");
        scanf("%d",&m);

            if(m>=90)
            {
                printf("Distinction");
            }
            else if (m>=80)
            {
                 printf("very Good");
            }
             else if (m>=70)
             {
                 printf("Good");
             }
              else if (m>=60)
              {
                    printf("better");
              }
               else if (m>=55)
               {
                    printf("Can do better");
               }
               else 
               {
                    printf("Better luck next time");

               }
     return 0;          
}