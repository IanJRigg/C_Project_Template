#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    printf("Currently doing nothing\n");
    if(argc == 2L)
    {
        int option = 0L;
        while((option = getopt(argc, argv, "")) != -1L)
        {
            switch(option)
            {
                default:
                    break;
            }
        }
    }
    else
    {
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
