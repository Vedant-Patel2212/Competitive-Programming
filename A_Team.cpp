#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for (int t = 0; t < n; t++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
