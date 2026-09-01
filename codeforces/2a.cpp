#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std; 

int main(){
    
    unordered_map<string, int> score; 
    vector<pair<string, int>> rounds;
    int n; cin >> n;
    string name; int s; 

    while(n--){
        cin >> name >> s; 
        rounds.push_back({name, s});
        score[name] += s;
    }

    int max = score.begin()->second;
    for(auto& x : score){
        if(x.second > max){
            max = x.second;
        }
    }

    unordered_map<string, int> current;
    string ans;
    for(auto& x : rounds){
        current[x.first] += x.second;
        if(current[x.first] >= max && score[x.first] == max){
            ans = x.first;
            break;
        }
    }
    cout << ans; 
    return 0; 
}