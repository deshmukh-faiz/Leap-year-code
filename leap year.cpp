#include <iostream>
using namespace std;

int main()
{
    int userinput;
    cout << "Enter year ";
    cin >> userinput;

    if (userinput % 400 == 0)
    {

        cout << userinput << "Leap year";
    }
    else if (userinput % 100 == 0)
    {
        cout
            << userinput << "Not a Leap year";
    }

    else if (userinput % 4 == 0)
        cout
            << userinput << "Leap year";
    else
    {
        cout << userinput << "not a Leap year";
    }
}
