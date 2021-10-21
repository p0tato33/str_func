#include "str_easy.h"

double itc_percent_lower_uppercase(string str) {
	double lower = 0;
	double upper = 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] <= 'z' && str[i] >= 'a')
			lower++;
		else if (str[i] <= 'Z' && str[i] >= 'A')
			upper++;
	}
	double ans = lower / upper;
	return ans;
}
