
class BIT {
	int full_sum = 0;
	int n;
	v(int) v;
public:
	BIT(){}
	BIT(int _n): n(_n){
		v.resize(n, 0);
	}
	template < int delta >
	void update(int x) {
		full_sum += delta;
		for(++x; x < n; x += x & -x)
			v[x] += delta;
	}
	int query(int x) {
		int r = 0;
		for(++x; x; x -= x & -x) 
			r += v[x];
		return r;
	}
	int query_suffix(int x) {
		return full_sum - query(x - 1);
	}
	void turn_on(int x) {
		update<1>(x);
	}
	void turn_off(int x) {
		update<-1>(x);
	}
};
