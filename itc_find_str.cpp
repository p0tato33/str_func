#include "str_easy.h"

int itc_find_str(string str1, string str2) {
    if (itc_len(str2) > itc_len(str1))
        return -1;
    else {
        int ans = 1;
        for (int i = 0; i < itc_len(str1); i++) {
            if (str1[i] == str2[0]) {
                for (int j = 1; j < itc_len(str2); j++) {
                    if (str2[j] == str1[i + j])
                        ans++;
                    else {
                        ans = 1; 
                        return -1;
                    }
                }
                if (ans == itc_len(str2))
                    return i;
            }
        }
    }
}
