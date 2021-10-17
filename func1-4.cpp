string itc_hello_str(string name){
    return "Hello, " + name;
}
long long itc_len(string str){
    long long i = 0;
    while(str[i] != '\0')i++;
    return i;
}
void itc_print_copy_str(string str, int number){
    for (int i = 0; i < number; i++)
    {
        cout << str;
    }
}
void itc_first_end_three(string str){
    long long len = itc_len(str);
    if (len > 5) {
        cout << str[0] << str[1] << str[2] << str[len - 3] << str[len - 2] << str[len - 1];
    }
    else {
        string sep = "";
        sep += str[0];
        itc_print_copy_str(sep, len);
    }
}
