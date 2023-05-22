#include <bits/stdc++.h>
#include <string>
using namespace std;

bool check(string part, string whole){
    if (whole.find(part) != string::npos)
        return true;
    return false;
}


int main() {
    int t, n;
    string par1, par2, chi, alp;
    cin >> t;
    while(t--) {
        cin >> par1 >> par2;
        cin >> n;
        int notachild = 0;
        while (n--) {
            cin >> chi;
            if (notachild == 2) continue;
            for(int i = 0; i < chi.length(); ++i) {
                alp = chi.at(i);
                if (!check(alp, par1) and !check(alp, par2)) notachild = 2;
            }
        }
        if (notachild == 2) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
    return 0;
}