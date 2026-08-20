#include <iostream>
#include <vector>
using namespace std;

void check(int na, int nb, vector<string>& arr) {
    if (na == 0 && nb == 0) {
        for (string x : arr) {
            cout << x;
        }
        cout << endl;
        return;
    }

    if (na > 0) {
        arr.push_back("a");
        check(na - 1, nb, arr);
        arr.pop_back();
    }

    if (nb > 0) {
        arr.push_back("b");
        check(na, nb - 1, arr);
        arr.pop_back();
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<string> arr;
    check(n, n, arr);

    return 0;
}