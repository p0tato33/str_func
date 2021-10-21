#include "str_easy.h"

string itc_reverse_str(string str) {
	long long len = itc_len(str);
	string reversed = "";
	for (long long i = len - 1; i >= 0; i--) {
		reversed += str[i];
	}
	return reversed;
}
