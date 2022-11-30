    
#include <stdio.h>
int main(){
    int colCount = 10, 
    firstMinus = 0,
    lastMinus = 0,
    dobutok = 0 ,
    array [colCount];

    for (int i = 0; i < colCount; i++)
    {
        printf("Enter element of array : " );
        scanf("%d" , &array[i]);
    }
    
   int max = array[0];
   
    for (int i = 0; i < colCount; i++)
    {
        if(max < array[i])
            max = array[i];  
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
      for (int i = 0; i < colCount; i++)
    {
        printf("%d\t" , array[i]);
    }
    if(lastMinus != 0)
        printf("\n");

    for (int i = firstMinus + 1; i < lastMinus; i++)
    {
        if(dobutok == 0)
          dobutok = array[i];
          if (i >= firstMinus + 2)
         dobutok *= array[i];   
         printf("%d\t", array[i] );
    }
    
    printf("\nMax element of this array = %d\n", max);

    if (dobutok != 0 )
        printf("Dobutok = s = %d\n", dobutok );
    
    return 0 ;
}


