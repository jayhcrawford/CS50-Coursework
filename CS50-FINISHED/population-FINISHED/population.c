#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int llama = 0;
    do
    {
        printf("Start Size: ");
        scanf("%i", &llama);
    }
    while (llama<9);

    int end_pop_size = 0;
    do
    {
        printf("End Size: ");
        scanf("%i", &end_pop_size);
    }
    while (end_pop_size<llama);

    //This will print 0 if the population size will be met within the year
    if ((llama+(llama/3)-(llama/4))>end_pop_size)
    {
      printf("Years: 0\n");
      exit(0);
    }

    //this will find the number of years that it takes
    int years = 0;
    do
    {
    int a = llama+(llama/3)-(llama/4);
    years++;
    llama = a;
    }
    while ( llama < end_pop_size );
    printf("Years: %i\n", years);

}


