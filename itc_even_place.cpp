#include "str_easy.h"

string itc_even_place(string str) {
    int len = itc_len(str);
    string res;
    for (int i = 0; i < len; i++) {
        if (i % 2 == 1) {
            res = res + str[i];
        }
    }
    return res;
}
