#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;
        if (N == -1) {
            cout << "Bye" << endl;
            break;
        }
        int result = N % 5 == 0;
        cout << (result ? N / 5 : -1) << endl;
    }
    return 0;
}