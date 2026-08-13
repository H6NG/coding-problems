#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std; 

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double m, n, a; cin >> n >> m >> a;
    cout << fixed << setprecision(0) << ceil(m/(a))*ceil(n/(a));
    return 0; 
}