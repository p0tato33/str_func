#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3) {
    int counter;
    while (itc_find_str(str1, str2) != -1) {
        string ans1;
        string ans2;
        counter = itc_find_str(str1, str2);
        for (int i = 0; i < counter; i++)
            ans1 += str1[i];
        for (int i = counter + itc_len(str2); str1[i] != '\0'; i++)
            ans2 += str1[i];

        str1 = ans1 + str3 + ans2;
    }
    return str1;
}
