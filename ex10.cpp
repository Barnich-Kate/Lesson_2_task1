#include <iostream>

using namespace std;

int main()
{
    int a, b, res;
    cout<<"Type number 1: ";
    cin >> a;
    cout<<"Type number 2: ";
    cin >> b;
    
    if (a!=b) {
        res = a + b;
        a = res;
        b = res;
        cout << a << endl;
        cout << b << endl;
    } else if (a=b){
        a = 0;
        b = 0;
        cout << a << endl;
        cout << b << endl;
    } 

    return 0;
}
