// comsc-210 | lab6 | Christian Molina 

#include <cstddef>
#include <iostream>
using namespace std;
#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
#include <numeric> // I found this one online for accumulation

//the code simulates or tries to simulate a month of daily temperatures, 30 days

constexpr size_t DAYS = 30;

void display(const array<double, DAYS>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "Day " << (i + 1) << ": " << arr[i] << "°C" << endl;
    }
}