
/**************************************************
**  Author:  Aditya Goel                          *
**  NIT, Kurukshetra                              *  
**  INDIA                                         * 
**************************************************/

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007  //NA
#define inf 0x3f3f3f3f
#define l_inf 1e14
#define ll long long
#define dt ll

#define all(c) c.begin(), c.end()
#define dcl(a, val) memset(a, val, sizeof(a))

#define rep(i, a, b) for(dt i = a; i <= (dt)(b); i++)

#define tra(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

#define scl(a) scanf("%lld", &a);
#define sci(a) scanf("%d", &a);
#define scd(a) scanf("%lf", &a);

#define cc1(a) cout << #a << ": " << a << endl;
#define cc2(a, b) cout << #a << ": " << a << " , " << #b << ": " << b << endl;
#define cc3(a, b, c) cout << #a << ": " << a << " , " << #b << ": " << b << " , " << #c << ": " << c << endl;
#define cc4(a, b, c, d) cout << #a << ": " << a << " , " << #b << ": " << b << " , " << #c << ": " << c << " , " << #d << ": " << d << endl;

#define pr pair<dt, dt>  //NA
#define mp(a, b) make_pair(a, b)
#define pb push_back  //NA
#define gc getchar  //NA
#define F first
#define S second

#define v(x) vector < x >
#define p(x, y) pair < x, y >

// #define pq priority_queue < dt, vector < dt >, greater < ll > > 
// #include <tr1/unordered_map>
// #include <tr2/unordered_set>
// using namespace std::tr1;
// using namespace std::tr2;

const int SIZE = 5 * 1e5 + 10;

ll gcd (ll a, ll b) {
	return (!b ? a : gcd(b, a % b)); 
}

int ADD(int a, int b, int m = MOD) {
	return ((a + b) % m + m) % m;
}

int MUL(int a, int b, int m = MOD) {
    return (1LL * a * b % m);
}
 
int DIV(int a, int b, int m = MOD) {
//	return MUL(a, power(b, m - 2));		//Include Efficient Power Function
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// clock_t tStart = clock();

	// freopen("in.txt", "r", stdin);
	// freopen("out1.txt", "w", stdout);
	
	int t;
	cin >> t;
	rep(tt, 0, t - 1) {
		printf("Case #%d: ", tt + 1);
	}

   	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}
