/* Первая программа */
#include <stdio.h> //Директива препроцессора #Включать стандартную библиотеку ввода/вывода
int a; // Объявление переменной типа integer
int ch = 5;

// Условный оператор if, else if, else;// 

int main(void){ // Основная функция main 

    if (ch == 0){
        a = 55;
    } else if (ch == 1) {
        a = 50;
    } else {
        printf("Error\n");
    }
    printf("%d", a);
    
    return 0;
}