#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int passenger_count = 0;
    int min_capacity = 0;

    cin >> a >> b;
    passenger_count = b;
    min_capacity = b;

    for (int i = 1; i < n - 1; i++)
    {

        cin >> a >> b;
        passenger_count = passenger_count - a + b;
        if (passenger_count > min_capacity)
        {
            min_capacity = passenger_count;
        }
    }
    cout << min_capacity << endl;
}