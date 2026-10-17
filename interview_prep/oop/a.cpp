#include <iostream> 
using namespace std; 
#include <utility> 
#include <algorithm>
#include <string>

class Stock {
    double price; 
    string name; 

    public: 
        Stock(string name, double price) : name(name), price(price) {}
        double getPrice() const {
            return price; 
        }
        void updatePrice(double newprice){
            price = newprice;
        }
        void display() const {
            cout << "Stock: " << name << ", Price: " << price << endl; 
        }
}; 

class Investor{
    string name; 
    double balance; 
    vector<pair<Stock*, int>> portfolio;

    public: 
        Investor(string name, double balance) : name(name), balance(balance) {}
        void buyStock(Stock& stock,int quantity){
            // Implementation for buying stock
            portfolio.push_back({ &stock, quantity});
        }
};

int main(){
    Stock appl("Apple", 150.0);
    appl.display();
    appl.updatePrice(155.0);
    appl.display();
}