#include <stdio.h>
#include <module_a.h>
#include <module_b.h>

int main(void)
{
    printf("Average of 4, 5, and 6: %d\n", AverageThreeBytes(4, 5, 6));
    printf("Average of 8, 8, 8, and 16: %d\n", AverageFourBytes(4,5,6,15));
    printf("Check the code build on github \n");
    printf("Check the code with pull request \n");

    return 0;
}
