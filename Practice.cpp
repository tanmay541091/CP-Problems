#include <bits/stdc++.h>
#include <string>
using namespace std;

bool check(string part, string whole){
    if (whole.find(part) != string::npos) return true;
    return false;
}

int NotaChild(string par1, string par2, string chi){
    string alp;
    for(int i = 0; i < chi.length(); i++) {
        alp = chi.at(i);
        if(!check(alp, par1) and !check(alp, par2)) return 69;
    }
    return 0;
}


int main() {
    int t, n;
    string par1, par2, chi, alp;
    cin >> t;
    while(t--) {
        cin >> par1 >> par2;
        cin >> n;
        while (n--) {
            cin >> chi;
            if (NotaChild(par1, par2, chi) == 69) {
                cout << "NO" << endl;
                break;
            }
            else cout << "YES" << endl;
        }
    return 0;
    }
}