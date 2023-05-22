#include <iostream>
using namespace std;

int main() {
	int t, n, i;
	
	cin >> t;
	while (t--) {
	    cin >> n;
	    int sum = 0;
	    
	    for (i = n; i > 0; i = i - 2){
	        sum += i*i;
	    }
	    cout << sum;
	}
	return 0;
}
