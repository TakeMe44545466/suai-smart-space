#include "../fun.h"

int isNoWordLetter(char ch) {
    if (ch == ' ' || ch == ',' || ch == '.' || ch == '!' || ch == '&' || ch == '?' || ch == '(' ||  ch == ')' || ch == '*' || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}

char* fun(const char* inputLine) {
    if ( inputLine == NULL ) {
        puts("null pointer instead of string");
        return NULL;
    }
    int i = 0, j = 0;
    while (isNoWordLetter(inputLine[i])) i++;
    char* returnLine = (char*)malloc(sizeof(char) * STRING_SIZE );
    if ( returnLine == NULL ) {
        puts("malloc could not allocate memory buffer");
        return NULL;
    }
    while (inputLine[i] != 0) {
        if (isNoWordLetter(inputLine[i])) {
            returnLine[j++] = '\n';
            while (isNoWordLetter(inputLine[++i]));
        } else {
            returnLine[j++] = inputLine[i++];
        }
    }
    if ( returnLine[j-1] == '\n' ) j--;
    returnLine[j] = '\0';
    return returnLine;
}