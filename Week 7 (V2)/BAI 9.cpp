void reverse(char *s) {
    int i = 0;
    while(*(s + i) != '\0') {
        ++i;
    }
    for(int j = 0; j < i/2; j++) {
        char c = *(s + j);
        *(s + j) = *(s + i - j - 1);
        *(s + i - j - 1) = c;
    }
}