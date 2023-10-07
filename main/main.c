#include <stdio.h>
#include <module_a.h>
#include <module_b.h>
#include <module_c.h>

int main(void)
{
    printf("Average 3 numbers of 4, 5, and 6: %d\n", AverageThreeBytes(4, 5, 6));
    printf("Average 4 numbers of 8, 8, 8, and 16: %d\n", AverageFourBytes(8,8,8,16));
    printf("Average 5 numbers of 8, 8, 8, 8, and 8: %d\n", AverageFiveBytes(8,8,8,8,8));
    printf("Check the code build on github \n");
    printf("Check the code with pull request \n");

    return 0;
}
