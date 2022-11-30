#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int max = 100, 
    min = -100,
    lastMinus = 0,
    firstMinus = 0,
    colCount = 10,
    array[colCount];
    long long int dobutok = 0;

    srand(time(NULL));

    for (int i = 0; i < colCount; i++)
        array[i]=rand() % (min - max + 1) + min;

    int maxOfArray = array[0];

    for (int i = 0; i < colCount; i++)
        printf("%d\t" ,array[i]);

    for (int i = 0; i < colCount; i++)
    {
        if(maxOfArray < array[i])
            maxOfArray = array[i];
    }

    for (int i = 0; i < colCount; i++)
    {
        if(array[i] < 0)
        {
            firstMinus =i;
               break;  
        }
    }
    
    for (int i = colCount - 1 ; i > firstMinus; i--)
    { 

        if(array[i] < 0)
        {
            lastMinus = i;
            break;
        }
       
    }
     printf("\n");
     for (int i = firstMinus + 1; i < lastMinus; i++)
    {
        if(dobutok == 0)
          dobutok = array[i];
          if (i >= firstMinus + 2)
         dobutok *= array[i];   
         printf("%d\t", array[i] );
    }

    printf("\nMax element of this array = %d\n", maxOfArray);
    
    if (dobutok != 0 )
        printf("Dobutok = %d\n", dobutok );

    return 0 ;
}
