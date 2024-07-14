#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<int mod, int base>
struct Hash {
    vector<int> h;
    vector<int> pow_base;
    int n;

    Hash(string& st) {
        n = st.size();
        h.resize(n+1);
        pow_base.assign(n+1, 1);
        for (int i = 0; i < n; i++) {
            h[i+1] = (h[i]*1LL*base + st[i]) % mod;
            pow_base[i+1] = pow_base[i]*1ll*base % mod;
        }
    }

    int get(int l, int r) { // [l, r)
        int res = (h[r]*1ll - h[l]*1ll*pow_base[r-l]) % mod;
        if (res < 0) {
            return res + mod;
        } else {
            return res;
        }
    }
};

void A() {
    string s, t;
    cin >> s >> t;

}


