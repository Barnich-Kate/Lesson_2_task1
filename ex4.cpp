#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Type number 1: ";
    cin >> num1;
    cout<<"Type number 2: ";
    cin >> num2;
    cout<<"Type number 3: ";
    cin >> num3;
    if (num1 > 0 && num2 > 0 && num3 >0) {
        cout << "The sum of nums = 3" << endl;
    } else if (num1 > 0 && num2 > 0 || num1 > 0 && num3 > 0 || num2 > 0 && num3 > 0){
        cout << "The sum of nums = 2 " << endl;
    } else if (num1 > 0 || num2 > 0 || num3 > 0) {
        cout << "The sum of nums = 1" << endl;
    }

    return 0;
}
