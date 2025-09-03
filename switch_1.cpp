#include <stdio.h>
#include <conio.h>
int main ()
{
    int a,p,q;
    printf("1. addition of two numbers.\n 2. multiplication of two numbers.\n 3.Odd or Even\n 4.divisible by 5.\n 5. Prime or not.\n");
    printf("Enter the choice number:");
    scanf("%d",&a);

    switch(a)
    {
        case 1: {
                printf("\nEnter two numbers:");
                scanf("%d %d",&p,&q);
                printf("\n%d+%d=%d",p,q,p+q);
        }
                break;
        case 2: {printf("\nEnter two numbers:");
                scanf("%d %d",&p,&q);
                printf("\n%d*%d=%d",p,q,p*q);
        }
                break;
        case 3: {printf("\nEnter a number:");
                scanf("%d",&p);
                if(p%2==0)
                   printf("\n %d is an Even number.",p);
                else
                    printf("\n %d is an Odd number.",p);
                }break;

        case 4: {printf("\nEnter a number:");
                scanf("%d",&p);
                 if(p%5==0)
                   printf("\n %d is divisible by 5.",p);
                else
                    printf("\n %d is not divisible by 5.",p);
               } break;

        case 5: {printf("\nEnter a numbers:");
                scanf("%d",&p);
        }
        break;

        default : printf("Invalid choice.");
    }

}
