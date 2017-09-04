//Use this module with General_Template.cpp
//Uses the efficient power function that we already build
//Time Complexity to compute inverse_modulo is O(N) and for NCR is O(1)

ll fact[SIZE], inv[SIZE];
void build_inverse_modulo() {
    assert(MOD >= SIZE);
    fact[0] = 1;
    rep(i, 1, SIZE) 
	fact[i] = MUL(fact[i-1], i);
    inv[SIZE - 1] = power(fact[SIZE - 1], MOD - 2, MOD);
    for(int i = SIZE - 2; i >= 0; i--) inv[i] = MUL(inv[i + 1], (i + 1));
}

int ncr(int n, int r) {
    return MUL(MUL(fact[n], inv[n - r]), inv[r]);
}
