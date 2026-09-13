#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < s.size() - 1; i++) {
        ans += s[i];
        ans += 'o';
    }
    ans += s[s.size() - 1];
    cout << ans;
    return 0;
}