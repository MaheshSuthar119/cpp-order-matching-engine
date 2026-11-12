#include<iostream>
#include "matching/order.hpp"

int main(){
    matching::Order order{
        1001,
        matching::Side::Buy,
        10025,
        10
    };
    if(order.side == matching::Side::Buy){
        std::cout << "Order is a Buy order.\n";
        std::cout << "Order ID: " << order.orderId << "\n";
        std::cout << "Price: " << order.price << "\n";
        std::cout << "Quantity: " << order.quantity << "\n";
    }
    else{
        std::cout << "Order is a Sell order.\n";
    }
    return 0;
}