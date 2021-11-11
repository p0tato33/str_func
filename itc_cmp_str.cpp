#include "str_easy.h"

#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    string rev, rev2;
    if (itc_len(str1) < num || num < 0) return str1;
    for (int i = 0; i < num; i++) rev += str1[i];
    for (int i = 0; str2[i] != '\0'; i++) rev += str2[i];
    for (int i = num; str1[i] != '\0'; i++) rev += str1[i];
    for (int i = 0; i < itc_len(str1); i++) rev2 += rev[i];
    return rev2;
}
