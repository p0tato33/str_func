#include "str_easy.h"

int itc_count_char_in_str(char ch, string str){
    int len = itc_len(str), res = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == ch){
            res++;
        }
    }
    return res;
}
