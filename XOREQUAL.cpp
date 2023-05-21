#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
#define mod 10000007
int main() {
    long long n, t, ans;
    cin >> t;
    while (t--){
        cin >> n;
        // Only even numbers
        ans = fmod(pow(2, n - 1),  mod);
        cout << ans << endl;
        //cout << pow(2, n - 1) % c;
    }
    return 0;
}
