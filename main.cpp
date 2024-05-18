#include <iostream>
#include <string>
#include <cmath> // for sqrt, sin
#include <climits>
#include <iomanip>
#include<array>
#include<random> // for random_device
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function

using namespace std;

template<typename T>
void print(const T &item) {
    std::cout << item;
}

template<typename T>
void print_n_times(const T &item, const int times) {
    for (int i = 0; i < times; i += 1) {
        print(item);
    }
}

template<typename T>
void printl(const T &item) {
    std::cout << item << std::endl;
}

template<typename T>
void printl_n_times(const T &item, const int times) {
    for (int i = 0; i < times; i += 1) {
        printl(item);
    }
}

template<typename T>
auto get_value(const std::string &message) -> T {
    std::cout << message;
    T value;
    std::cin >> value;
    cin.ignore();
    return value;
}

string get_string_from_message(const std::string &message) {
    std::cout << message;
    string value;
    std::getline(std::cin, value);
    return value;
}

string get_string() {
    string value;
    std::getline(std::cin, value);
    return value;
}

double round_up(double const value, const int decimal_places) {
    const double multiplier = std::pow(10.0, decimal_places);
    return std::ceil(value * multiplier) / multiplier;
}

// class MonthlyRainLog {
// public:
//     string month_name;
//     double rain_amount;
//
//     // dummy constructor
//     MonthlyRainLog() {
//     }
//
//     // Parameterized constructor
//     MonthlyRainLog(const string &a_month_name, const double &a_rain_amount) {
//         month_name = a_month_name;
//         rain_amount = a_rain_amount;
//     }
// };

/*
 * Write a program that asks the user for the number of males and
 * the number of females registered in a class. The program should display
 * the percentage of males and females in the class.
 * Hint: Suppose there are 8 males and 12 females in a class.
 * There are 20 students in the class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40 percent.
 * The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60 percent.
 *
 */

int main() {
    const auto males_amount = get_value<int>("Type the number of males registered in the class: ");
    const auto females_amount = get_value<int>("Type the number of females registered in the class: ");



    return 0;
}
