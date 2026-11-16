#include<iostream>
#include "matching/order.hpp"

int main(){
    // Test 1: BUY Order
    matching::Order buyOrder{
        1001,
        matching::Side::Buy,
        10025,
        10
    };

    std::cout << "===== BUY ORDER =====\n";
    std::cout << "Order ID: " << buyOrder.orderId << '\n';
    std::cout << "Side: BUY\n";
    std::cout << "Price: " << buyOrder.price << " paise\n";
    std::cout << "Quantity: " << buyOrder.quantity << '\n';

    // Test 2: SELL Order
    matching::Order sellOrder{
        1002,
        matching::Side::Sell,
        10100,
        5
    };

    std::cout << "\n===== SELL ORDER =====\n";
    std::cout << "Order ID: " << sellOrder.orderId << '\n';
    std::cout << "Side: SELL\n";
    std::cout << "Price: " << sellOrder.price << " paise\n";
    std::cout << "Quantity: " << sellOrder.quantity << '\n';
    return 0;
}