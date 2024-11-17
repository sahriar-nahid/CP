#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int received[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> received[i];
    }

    int gifters[n];
    for (int i = 1; i <= n; i++)
    {
        gifters[received[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << gifters[i] << " ";
    }
}