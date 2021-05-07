// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// Modified by: Layla Michel
// Modified on: May 7, 2021
// This program calculates total from subtotal and tax

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.15;
    float tax, subTotal, total;

    // asks the user for the subtotal
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // calculates the tax and total
    tax = + subTotal * HST;
    total = subTotal + tax;

    // displays the tax and total price
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
