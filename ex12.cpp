#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Type number 1: ";
    cin >> a;
    cout<<"Type number 2: ";
    cin >> b;
    cout<<"Type number 3: ";
    cin >> c;
    
    if (a < b && a < c) {
        cout << a << endl;
    } else if (b < a && b < c){
        cout << b << endl;
    } else if (c < a && c < b) {
        cout << c << endl;
    }

    return 0;
}
