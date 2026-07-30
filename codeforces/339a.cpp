#include <iostream> 
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 

int main(){

    vector<char> arr;
    string input; 
    cin >> input; 

    for(char i : input){
        if(i != '+'){
            arr.push_back(i);
        }
    }
    sort(arr.begin(), arr.end()); 
    for(int k = 0; k < arr.size(); k++){
        cout << arr[k]; 
        if(k != arr.size()-1) cout << '+';
    }

    return 0; 
}