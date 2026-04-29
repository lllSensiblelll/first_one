#include <iostream>
#include <vector>

int main() {
    char x;
    std::vector<char> data;
    int a=0;
    while (std::cin >> x) {
        data.push_back(x);  // добавляем очередное число в вектор
        a++;
    }
    std::cout << data.size() << std::endl;  // выводим размер вектора
    for (char x : data) {
        std::cout << x << " ";
    }
    while (!data.empty() && data.back() == 0) {
        // Пока вектор не пуст и последний элемент равен нулю
        data.pop_back();  // удаляем этот нулевой элемент
    }
    system("pause");
}
