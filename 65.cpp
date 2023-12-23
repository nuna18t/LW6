
#include <iostream>

int main() {
    const int N = 5; // Замініть 5 на бажаний розмір масиву
    int A[N];

    // Заповнення масиву
    std::cout << "Enter " << N << " integers:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> A[i];
    }

    int K;
    // Введення K
    std::cout << "Enter value for K (1 <= K <= N): ";
    std::cin >> K;

    // Перетворення масиву
    for (int i = 0; i < N; ++i) {
        A[i] += A[i] * K;
    }

    // Виведення результату
    std::cout << "Transformed array:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Element " << i + 1 << ": " << A[i] << std::endl;
    }

    return 0;
}
