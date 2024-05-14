#include <iostream>


void PrintArr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}
void ReverseArr(int *arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}

int main() {
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    std:: cout << "Array before reversing:\t";
    PrintArr(arr, size);
    ReverseArr(arr, size);
    std:: cout << "Array after reversing:\t";
    PrintArr(arr, size);
    return 0;
}