#include "str_easy.h"

string itc_even_place(string str) {
    if (itc_len(str) < 2)
        return "-1";
    string ans = "";
    for (int i = 1; i <= itc_len(str); i++){
        if (i % 2 == 0)
            ans += str[i - 1];
    }
    return ans;
}
