void rFilter(char *s) {
    // Your code goes here
    int length = strlen(s);
    for(int i = length-1; i >= 0; i--) {
        if((*(s+i) >= 'A' && *(s + i) <= 'Z') || (*(s+i) >= 'a' && *(s+i) <= 'z') ) break;
        *(s+i) = '_';
    }
}