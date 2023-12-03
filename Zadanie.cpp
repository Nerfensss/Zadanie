#include <iostream>
#include <cmath>

int min_ticket_cost(int n, int m, int a, int b, int k, int c) {
    if (m == 1) {
        return n * a;
    }

    int individual_cost = n * b;


    int group_cost = (n + k - 1) / k * c;

    return std::min(individual_cost, group_cost);
}

int main() {
    int n, m, a, b, k, c;


    std::cout << "Кількість людей: ";
    std::cin >> n;
    std::cout << "Кількість поїздок на одного: ";
    std::cin >> m;
    std::cout << "Вартість квитка на одну поїздку: ";
    std::cin >> a;
    std::cout << "Вартість безлімітного квитка на одну людину: ";
    std::cin >> b;
    std::cout << "Кількість людей в груповому квитку: ";
    std::cin >> k;
    std::cout << "Вартість групового безлімітного квитка: ";
    std::cin >> c;

    int result = min_ticket_cost(n, m, a, b, k, c);
    std::cout << "Мінімальна сумарна вартість квитків: " << result << std::endl;

    return 0;
}
