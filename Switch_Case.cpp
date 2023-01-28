#include <iostream>
using namespace std;
int main()
{

    int standerd;
    cout << "Enter Your Standered (without std):";
    cin>>standerd;
    switch (standerd)
    {
    case 10:
        cout << "You will gice SSC Board Exam" << endl;
        break;

    case 12:
        cout << "You will gice HSC Board Exam" << endl;
        break;
    default:
        cout << "Your Exam Name not found" << endl;
    }

    return 0;
}