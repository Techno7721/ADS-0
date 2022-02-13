// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int men = 0;
    int nod = 0;
    if (a > b) {
        men = b;
    } else {
        men = a;
    }
    for (int i = 1; i < men + 1; ++i) {
        if (a % i == 0) {
            if (b % i == 0) {
                nod = i;
            }
        }
    }
    return nod;
}
