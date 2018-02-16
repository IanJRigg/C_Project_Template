#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

#include "configuration.h"

int main(int argc, char** argv)
{
    if(argc == 1L)
    {
        // Search all of the ports
    }
    else if(argc >= 2L)
    {
        int option = 0L;
        while((option = getopt(argc, argv, "uth")) != -1L)
        {
            switch(option)
            {
                case 'u':
                    printf("UDP\n");
                    break;

                case 't':
                    printf("TCP\n");
                    break;

                case 'h':
                    // print help screen
                    printf("Helpful things\n");
                    break;

                default:
                    break;
            }
        }
        // Demux the arguments
            // -u triggers UDP search
            // -t triggers TCP search
            // -h prints out this statement
            // Anything else triggers a failure
    }
    else
    {
        fprintf(stderr, RED "Invalid number of arguments\n" NORMAL);
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
