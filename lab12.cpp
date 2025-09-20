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

void display(const array<double, DAYS>& temps) {
    cout << "Temperatures: ";

    for (const auto& t : temps) cout << t << " ";
    cout << endl;

}

int main(){

    array<double, DAYS> temperatures;

    ifstream fin("temp.txt");
    if(!fin){
        cerr << "Error opening file" << endl;
        return 1;
    }

    for(size_t i = 0; i < DAYS && fin; ++i){
        fin >> temperatures[i];
    }
    fin.close();

    cout << "the array's size: " << temperatures.size() << endl;
    display(temperatures);

    cout << "First day's temperature: " << temperatures.front() << endl;
    cout << "Last day's temperature: " << temperatures.back() << endl;
    cout << "temperature on lets say the 15th day: " << temperatures[14] << endl;

    auto minmax = minmax_element(temperatures.begin(), temperatures.end());

    return 0;
}