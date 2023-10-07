#include <stdio.h>
#include <module_a.h>
#include <module_b.h>
#include <module_c.h>
#include <MainConfig.h>

void print_app_version(char* app_name){
    printf("Application:%s Version %d.%d \n", app_name, Main_VERSION_MAJOR, Main_VERSION_MINOR);
}

int main(int argc, char* argv[])
{
    if (argc < 2){
        print_app_version(argv[0]);
    }

    printf("Average 3 numbers of 4, 5, and 6: %d\n", AverageThreeBytes(4, 5, 6));
    printf("Average 4 numbers of 8, 8, 8, and 16: %d\n", AverageFourBytes(8,8,8,16));
    printf("Average 5 numbers of 8, 8, 8, 8, and 8: %d\n", AverageFiveBytes(8,8,8,8,8));
    printf("Check the code build on github \n");
    printf("Check the code with pull request \n");

    return 0;
}
