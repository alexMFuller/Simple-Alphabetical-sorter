#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int x,int y, char** arr);
void selection_sort(char** a, const int n);
void display(char** a,int size);

int main(int argsc, char** argsv) {
	char** n;

  int i;
  printf("The array before sorting:\n");
  display(argsv , argsc);

  selection_sort(argsv,argsc);

  printf("The array after sorting:\n");
  display(argsv ,argsc);
	

  return 0;
}

/*
    swap two integers
*/

void swap(int x,int y, char** arr)
{
    char* temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
		
}

/*
    perform selection sort
*/
void selection_sort(char** a,const int size)
{
    int i, j, min;

    for (i = 1; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
						
            if (strcmp(a[j],a[min])<0)
            {
								
                min = j;
            }
        }
				
        swap(i, min, a);
    }
}
/*
    display array content
*/
void display(char** a,const int size)
{
    int i;
    for(i=1; i<size; i++)
       printf("%s ",a[i]);
    printf("\n");
}