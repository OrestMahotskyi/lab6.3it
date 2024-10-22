#include <iostream>
#include <iomanip>

using namespace std;

// Шаблонна функція для обміну елементів масиву з парними та непарними індексами
template <typename T>
void swapAdjacentElements(T arr[], int size) {
    for (int i = 1; i < size; i += 2) {
        swap(arr[i - 1], arr[i]); // Міняємо місцями елементи з індексами i-1 та i
    }
}

// Шаблонна функція для генерації масиву
template <typename T>
void generateArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Генерація чисел від 0 до 99
    }
}

// Шаблонна функція для виведення масиву
template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int main() {
    srand(time(0)); // Ініціалізація генератора випадкових чисел
    const int SIZE = 10;
    int arr[SIZE];

    // Генерація та виведення початкового масиву
    generateArray(arr, SIZE);
    cout << "Initial array:" << endl;
    printArray(arr, SIZE);

    // Міняємо місцями елементи з парними та непарними індексами
    swapAdjacentElements(arr, SIZE);

    // Виведення модифікованого масиву
    cout << "Modified array:" << endl;
    printArray(arr, SIZE);

    return 0;
}
