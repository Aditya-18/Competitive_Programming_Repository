//Use this module with General_Template.cpp
//Time Complexity to compute power a ^ n is O(log(N)).

int power(int a, int b, int m = MOD) {
    int res = 1;
    while( b ) {
        if( b & 1 ) {
            res = 1LL * res * a % m;
        }
        a = 1LL * a * a % m;
        b /= 2;
    }
    return res;
}
