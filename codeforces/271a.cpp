/*

Notes:

larger than input, but minimum

and all disctint number


*/

#include <iostream>
#include <string>
using namespace std;

int findDistinct(int n)
{

    int answer;
    for (auto i = 1; i < 1000; i++)
    {
        string s = to_string(n + i);

        if ((s[0] != s[1] &&
             s[0] != s[2] &&
             s[0] != s[3] &&
             s[1] != s[2] &&
             s[1] != s[3] &&
             s[2] != s[3]))
        {
            answer = stoi(s);
            break;
        }
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    cout << findDistinct(n);

    return 0;
}