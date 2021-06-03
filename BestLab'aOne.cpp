
#include <iostream>


int main()
{
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "array:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    
    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            array[i] = 0;
        }
    }


    std::cout << "result array:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}
