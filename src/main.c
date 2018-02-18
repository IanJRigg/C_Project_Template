#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

#include "configuration.h"
#include "networking.h"

void print_help_options()
{
    printf(" -u : Search UDP Ports\n"
           " -t : Search TCP Ports\n"
           " -h : Print this message\n");
}


int main(int argc, char** argv)
{
    if(argc == 2L)
    {
        // TODO: Make this take in options such as an IP address
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
                    // TODO: Make this only happen when nothing else is present
                    print_help_options();
                    break;

                default:
                    print_help_options();
                    break;
            }
        }
    }
    else
    {
        print_help_options();
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
