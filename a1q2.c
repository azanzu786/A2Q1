#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    struct stat st;
    if (stat(argv[1], &st) != 0) {
        fprintf(stderr, "Error: file doesn't exist or is not accessible.\n");
        return -1;
    }

    printf("%lld\n", (long long)st.st_size);
    return 0;
}
