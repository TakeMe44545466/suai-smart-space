#include "../fun.h"

int main(const int argc, const char *argv[]) {
    char* inputLine = malloc(sizeof(char) * STRING_SIZE );
    size_t max_reading_len = STRING_SIZE;
    if ( inputLine == NULL ) {
        puts("malloc could not allocate memory buffer");
        return 1;
    }
    if ( getline(&inputLine, &max_reading_len, stdin) < 1 ) {
        puts("line read error");
        return 2;
    }
    char *resultingLine = fun(inputLine);
    if ( resultingLine == NULL ) {
        puts("function failed");
        return 3;
    }
    printf("%s",resultingLine);
    free(resultingLine);
    free(inputLine);
    getchar();
    return 0;
}
