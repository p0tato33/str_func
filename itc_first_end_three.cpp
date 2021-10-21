#include "str_easy.h"

void itc_first_end_three(string str)
{
	long long n = itc_len(str);
	if (n > 5) {
		cout << str[0] << str[1] << str[2] << str[n - 3] << str[n - 2] << str[n - 1];
	}
	else {
		while (n > 0) {
			cout << str[0];
			n--;
		}
	}
}
