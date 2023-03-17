#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isMersenne(int x, int n) {
    return ((1 << x) - 1) % ((1 << n) - 1) == 0;
}

vector<int> findNMersenne(int n) {
    vector<int> nMersenne;
    for (int x = 1; x <= n; x++) {
        if (isMersenne(x, n)) {
            nMersenne.push_back(x);
        }
    }
    return nMersenne;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    vector<int> nMersenne = findNMersenne(n);
    cout << "The n-mersenne positive integers are: ";
    for (int i = 0; i < nMersenne.size(); i++) {
        cout << nMersenne[i] << " ";
    }
    cout << endl;
    return 0;
}
