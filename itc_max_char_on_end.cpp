#include "str_easy.h"

int itc_max_char_on_end(string str)
{
    int counter = 0;
    int ans = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            counter++;
        }
        else {
            counter = 0;
        }
        if (counter > ans)
            ans = counter;
    }
    return ans;
}
