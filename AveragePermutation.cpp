#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        if(n == 3){
            cout << " 1 2 3"<< endl;
            continue;
        }
        if(n == 4){
            cout << "4 1 2 3" << endl;
            continue;
        }
        cout << n << " " << n-2 << " ";
        for (int j = 1; j <= n-4; j++) {
        cout << j << " ";
        }
        cout << n-3 << " " << n-1 << endl;
    }
	return 0;
}
