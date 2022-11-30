#include <stdio.h>
int main(){
    int colCount = 5,
    a=0,
    array [colCount]; 
     
       for (int i = 0; i < colCount; i++)
    {
        printf("Enter element of array : " );
        scanf("%d" , &array[i]);
    }

    for (int i = 0; i < colCount; i++)
    {
         printf("%d\t",array[i]);
    }
printf("\n");
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > 0)
            array[i] = 1;
        if (array[i] <= 0) 
            array[i] = 0;
        a++;
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0 ;
}


