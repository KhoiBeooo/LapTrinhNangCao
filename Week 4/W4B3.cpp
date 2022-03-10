void printArrowLeft(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) cout << " ";
        for(int j = i; j < n; j++) cout << "*";
        cout << endl;
    }
    for(int i = n-2; i>= 0;i--) {
        for(int j = i+1; j < n; j++) cout << " ";
        for(int j = i; j < n; j++) cout << "*";
        cout << endl;
    }
}
void printArrowRight(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = n - i;j < n; j++) cout << "  ";
        for(int j = i; j < n; j++) cout << "*";
        cout << endl;
    }
    for(int i = n-2; i>=0; i--) {
        for(int j = n - i;j < n; j++) cout << "  ";
        for(int j = i; j < n; j++) cout << "*";
        cout << endl;
    }
}

void printArrow(int n, bool left) {
    if(left) printArrowLeft(n);
    else printArrowRight(n);
}