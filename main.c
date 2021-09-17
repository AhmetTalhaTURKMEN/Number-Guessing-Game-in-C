#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int sayi,sayi2;
    srand(time(0));

    sayi=rand()%100;

    for(;;){
        printf("Enter the number please: ");
        scanf("%d",&sayi2);
        //system("cls");
        if(sayi==sayi2)
           {
            printf("Congratulation !!!\n");
            printf("The number was %d",sayi);
            break;
           }
        else if (sayi>sayi2)
            printf("Up\n");
        else
            printf("Down\n");

    }

    return 0;
}