#include <iostream>

int main() {
    const int N = 10; // Замініть 10 на бажаний розмір масиву
    int array[N];

    // Заповнення масиву
    std::cout << "Enter " << N << " integers:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> array[i];
    }

    // Виведення чисел, кратних 10, в порядку зменшення індексів
    std::cout << "Numbers divisible by 10 in reverse order of indices:" << std::endl;
    int k = 0; // Лічильник кількості чисел, кратних 10

    for (int i = N - 1; i >= 0; --i) {
        if (array[i] % 10 == 0) {
            std::cout << "Index " << i << ": " << array[i] << std::endl;
            k++;
        }
    }

    // Виведення кількості чисел, кратних 10
    std::cout << "Total numbers divisible by 10: " << k << std::endl;

    return 0;
}
