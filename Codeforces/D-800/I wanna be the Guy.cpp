#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool levels[n + 1] = {};
    bool passed = true;

    int x;
    cin >> x;
    while (x--)
    {
        int a;
        cin >> a;
        levels[a] = true;
    }

    // do the same for y
    int y;
    cin >> y;
    while (y--)
    {
        int a;
        cin >> a;
        levels[a] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (levels[i] == false)
        {
            passed = false;
            break;
        }
    }
    if (passed)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}