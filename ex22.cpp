#include <iostream>

using namespace std;

int main()
{
    int coords1, coords2;
    cout<<"Type coordinates 1: ";
    cin >> coords1;
    cout<<"Type coordinates 2: ";
    cin >> coords2;
    
    if (coords1 > 0 && coords2 > 0) {
        cout << "This is the first quater" << endl;
    } else if (coords1 < 0 && coords2 > 0){
        cout << "This is the second quarter" << endl;
    } else if (coords1 < 0 && coords2 < 0) {
        cout << "This is the third quarter" << endl;
    } else {
        cout << "This is the fourth quarter" << endl;
    }

    return 0;
}
