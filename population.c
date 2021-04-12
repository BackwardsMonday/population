#include <cs50.h>
#include <stdio.h>
int getStart(void);
int getEnd(int start);
int getYears(int start, int end);

int main(void)
{
    int startSize = getStart();

    int endSize = getEnd(startSize);

    int years = getYears(startSize, endSize);

    printf("Years:%i\n", years);
}
int getStart(void)
{
    int n;
    do
    {
        n = get_int("Enter a populatin starting size biger than 9\n");
    } while (n < 9);
    return n;
}

int getEnd(int start)
{
    int n;
    do
    {
        n = get_int("Enter a ending population bigger than the starting size\n");
    } while (n < start);
    return n;
}

int getYears(int start, int end)
{
    int curentSize = start;
    int years = 0;

    while (curentSize < end)
    {
        int new = curentSize / 3;
        int old = curentSize / 4;
        curentSize+= new - old;
        years++;
    }

    
    return years;
}