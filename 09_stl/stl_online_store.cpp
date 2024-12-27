#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<string>
#include<set>
#include<map>
#include<ctime>
#include<unordered_map>
#include<unordered_set>

using namespace std;

struct Product{
    int prodcutID;
    string productName;
    string category;
};

struct Order{
    int orderID;
    int ProductId;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Blender", "Kitchen"},
        {104, "Study Lamp", "Home"},
        {105, "Coffee Maker", "Kitchen"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C002", time(0)});
    orderHistory.push_back({2, 102, 2, "C001", time(0)});
    orderHistory.push_back({3, 103, 1, "C004", time(0)});
    orderHistory.push_back({4, 104, 2, "C003", time(0)});

    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 10},
        {103, 20},
        {104, 15},
        {105, 12},
    };

    multimap<string, Order> customersOrders;
    for(const auto &order: orderHistory){
        customersOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Tom"},
        {"C002", "Mike"},
        {"C003", "Shree"},
        {"C004", "Aniwesh"},
        {"C001", "Jerry"},
    };

    unordered_set<int> uniqueProductIds;
    for(const auto &product: products){
        uniqueProductIds.insert(product.prodcutID);
    }

    return 0;
}
