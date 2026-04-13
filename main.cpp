#include <iostream>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

    cout << N << " to power number: ";

    for(int i = 0; i <= M; i++) {
        int result = 1;
        cout << result << ", ";
        result *= N;
    }

    cout << endl;

    return 0;
}
