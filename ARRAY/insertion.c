/* ----------Header file start-------*/
#include<stdio.h>
#include<stdlib.h>
/* ----------Header file end-------*/


/*---------- transversal  of  array  start--------------*/
void  display(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
       printf("%d\n",arr[i]);
   }
}
/*---------- transversal  of  array  end----------------*/


/*-------------program  for insertion start-----------------*/

 int setinsertion( int arr[] , int size, int index, int element, int capacity)
 {
    /* checking  if   the  array is full  or  not */
     if( size >= capacity)
     {
         printf("sorry there is no sapce in the array\n");
         return -1;
     }
     for (int i = size-1; i >= index ; i--)
     {
         arr[i+1]  = arr[i];
     }
      
     arr[index] = element;
     return 1;
 }

/*-------------program  for insertion end-------------------*/


/* ---------------main  function start-------------------- */
int main()
{
 int  arr[100] = {8,12,15,24,76,99};
 int  size = 6;
 printf("Before the insertion:\n");
 display(arr,size);
 int index = 4;
 int element = 34;
 printf("After the insertion:\n");
 setinsertion( arr , size, index, element, 100);
 size += 1;
 display(arr,size);

return 0;
}
/* ---------------main  function end-------------------- */
