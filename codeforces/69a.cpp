/* 


Notes: 

equilibrium problem. sum of all forces = 0;

you can't do 

if(x+y+z == 0) cout << "YES" because if x=-1, y =1 and z =0 then it will still give 0 but it's not in equalibrium

*/


#include <iostream>
using namespace std; 

int main(){

    int n_lines; 
    cin >> n_lines;
    int x = 0, y = 0, z = 0; 
    int m; 

    for(auto i = 0; i < n_lines; i++){
        cin >> m; 
        x+=m; cin>>m; y+=m; cin>>m; z+=m; 
        cout << '\n'; 
    }
    if(x == 0 && y == 0 && z == 0) cout << "YES";
    else cout << "NO";
    return 0; 
}