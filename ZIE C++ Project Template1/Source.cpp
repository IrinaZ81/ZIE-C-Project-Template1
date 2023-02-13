#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // различные сортировки
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int m;

	/*//Задача 1. Массив из 10 случайных чисел. программа выводит первые 5 элементов
	std::cout << "Задача 1. \nСлучайный массив:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1; //[1...10], можно сократить формулу 10+1
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	// Пузырьковая сортировка
	//for (int i = 4; i>0; i--)
		//for (int j = 0; j<i; j++)
			//if (arr1[i] > arr1[j + 1]) 
				//std::swap(arr1[j], arr1[j + 1]);

			//быстрая сортировка

	std::sort(arr1, arr1 + 5);

	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << " ";
	std::cout << "\n\n";*/

	//Задача2. Температура в январе
	/*std::cout << "Задача2\nТемпература за все дни января";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (30-30);
		std::cout << arr2[i] << " ";
	}
	std::cout << "\b\b.\nВведите максимальную температуру ->";
	std::cin >> n;
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] <= n)
			counter++;

	}
	std::cout << "Средняя температура за месяц: " << (double)sum / size2 << "\n";
	std::cout << "Кол-во дней, в которые температура опускалась наже " << n << " градусов = " << counter << "\n\n";*/

	//Задача3. Вхождение в диапазон
	std::cout << "Введите начало диапазона ->";
	std::cin >> n;
	std::cout << "Введите конец диапазона ->";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 1; i < size3; i++) {
		arr3[i] = rand() % 100;
		if (arr3[i] >= n && arr3[i] <= m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
		std::cout << i + 1 << ". " << arr3[i] << "\n";



	
		}




	
	
	
	



	return 0;

}