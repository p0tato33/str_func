#include "str_easy.h"

int itc_find_str(string str1, string str2)
{
    int nn = 0;
    int sravnenie = 0;
    int newn = 0;
    for (int i = 0; i < itc_len(str1); i++) {
        if (str1[i] == str2[nn]) {
            if (nn == 0)
                newn = i;
            nn++;
            sravnenie++;
            if (sravnenie == itc_len(str2))
                return newn;
        }
        else {
            nn = 0;
            sravnenie = 0;
        }
    }
    return -1;
}
