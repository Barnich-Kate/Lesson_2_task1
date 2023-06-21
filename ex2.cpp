#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Type number: ";
    cin >> num;
    if (num > 0) {
        cout << "Result 1: " << num + 1 << endl;
    } else {
        cout << "Result 2: " << num - 2 << endl;
    }

    return 0;
}
