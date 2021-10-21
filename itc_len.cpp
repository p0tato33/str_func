#include "str_easy.h"

long long itc_len(string str) {
    int n = 0;
    while (str[n] != '\0') n++;
    return n;
}
