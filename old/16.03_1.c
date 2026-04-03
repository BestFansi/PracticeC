/*
Given a positive integer n, return the least common multiple (LCM) of 2 and n (a positive integer).
*/
int smallestEvenMultiple(int n) {
    if (n % 2 == 0) {
        return n;
    }
    else {
        return 2 * n;
    }
}
