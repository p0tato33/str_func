#include "str_easy.h"

int itc_count_char_in_str(char ch, string str){   //5
    long long i = 0;
    int counter = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)counter++;
        i++;
    }
    return counter;
}

string itc_even_place(string str) {
	string answer = "";
	for (long long i = 0; i < itc_len(str); i++)
	{
		if ((i + 1) % 2 == 0)answer += str[i];
	}
	return answer;
}


double itc_percent_lower_uppercase(string str) {
	double lower = 0;
	double upper = 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] <= 'z' && str[i] >= 'a')
			lower++;
		else if (str[i] <= 'Z' && str[i] >= 'A')
			upper++;
	}
	double answer = lower / upper;
	return answer;
}

string itc_reverse_str(string str) {
	long long len = itc_len(str);
	string reversed = "";
	for (long long i = len - 1; i >= 0; i--) {
		reversed += str[i];
	}
	return reversed;
}

string itc_slice_str(string str, int start, int end) {
	if (end < start)
		return str;
	else {
		string ans = "";
		if (end >= itc_len(str))
			end = itc_len(str) - 1;
		for (int i = start; i < end + 1; i++)
			ans += str[i];
		return ans;
	}
}

bool itc_equal_reverse(string str)
{
	return str == itc_reverse_str(str);
}
