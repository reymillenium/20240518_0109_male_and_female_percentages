#include <iostream>
#include <iomanip>

using namespace std;

template<typename T>
auto get_value(const std::string &message) -> T {
    std::cout << message;
    T value;
    std::cin >> value;
    cin.ignore();
    return value;
}

int main() {
    const auto males_amount = get_value<int>("Please type the number of males registered in the class: ");
    const auto females_amount = get_value<int>("And now the number of females registered in the class: ");

    const int class_size = males_amount + females_amount;
    const double males_percentage = males_amount * 100.0 / class_size;
    const double females_percentage = females_amount * 100.0 / class_size;

    cout << setprecision(2) << fixed;
    cout << "Your class has approximately a " << males_percentage << " % of males and a " << females_percentage << " % of females." << endl;

    return 0;
}
