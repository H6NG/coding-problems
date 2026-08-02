

/* 


Notes: stupid mistake, i forgot to put '\n' thinking it would tab automatically


*/ 

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c; // learned a new way;
        int m = max({a, b, c});
        if (m == a){
            if (b + c == m) cout << "YES" << '\n';
            else cout << "NO" << '\n';;
        }
        else if (m == b){
            if (a + c == m) cout << "YES" << '\n';
            else cout << "NO" << '\n';;
        }
        else{ // m == c
            if (a + b == m) cout << "YES" << '\n';
            else cout << "NO" << '\n';;
        }
    }
    return 0; 
}