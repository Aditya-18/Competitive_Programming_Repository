
v(int) primes;
bitset<10000010> bs;
ll sieve_size;
void createSieve(ll upperBound) {
	bs.set();
	sieve_size = upperBound + 1;
	bs[0] = bs[1] = 0;
	for(ll i = 2; i <= sieve_size; i++) {
		if(bs[i]) {
			for(ll j = i * i; j <= sieve_size; j += i) {
				bs[j] = 0;
			}	
			primes.push_back((int)i);
		}	
	}	
} 
