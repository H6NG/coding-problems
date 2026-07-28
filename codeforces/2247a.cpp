/*

Notes:

- we can flip the numbers but it has to be consecutive meaning a_i = -a_i and a_(i+1) = -a_(i+1)
- We can flip IF WE WANT. it's not mandatory.

*/

#include <iostream>
#include <vector>

using namespace std;

bool helper(const vector<int> &arr, int sum)
{
    int n = arr.size();

    // you are getting a vector [-1,1,1,-1]
    // a total sum, in this case 0
    int m = 0; // number of [-1,-1] or [1,1] consecutive pairs

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;

        if (sum < 0 && arr[i] == arr[j] && arr[i] == -1)
        { // negative
            m += 1;
            i++;
        }
        else if (sum > 0 && arr[i] == arr[j] && arr[i] == 1)
        {
            // if positive. It cannot be equal to 0; otherwise,
            // it would not enter this condition.
            m += 1;
            i++;
        }
    }

    // one mistake I made here, is we need to iterate, because they are not obligated to flip.
    for (int k = 0; k <= m; k++)
    {
        if (sum > 0 && sum - 4 * k == 0)
            return true;

        if (sum < 0 && sum + 4 * k == 0)
            return true;
    }

    return false;
}

int main()
{
    int num, n_test = 0, n = 0;
    vector<int> arr;

    cin >> n_test;

    for (auto i = 0; i < n_test; i++)
    {
        cin >> n;
        int sum = 0;
        if (n % 2 == 1)
        { // if n equals to odd. it's hopeless.
            for (int j = 0; j < n; j++)
                cin >> num;
            cout << "NO\n";
            continue;
        }
        // if n is even
        for (auto j = 0; j < n; j++)
        {
            cin >> num;
            arr.push_back(num);
            sum += num;
        }
        if (sum == 0)
            cout << "YES";
        else if (helper(arr, sum))
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
        arr.clear();
    }
    return 0;
}