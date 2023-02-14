#include <iostream>

void say_hello() {                      //void переводится пустота, далее имя функции? 
	std::cout << "Hello world!\n";        //фигурные скобки обязательны
	std::cout << "Bye world\n";           // void функция не возвращающая никаких значений 
	                                      // и выводящая сообщение
}    
//Функция, не принмающая никаких значений, но принимающая два числа и вычисляющая их сумму
void print_sum(int num1, int num2) {
	std::cout << num1 << " +" << num2 << " = " << num1 + num2 << "\n";

}
//Функция, возвращающая сумму двух переданных в нее целых чисел
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	return num1 + num2; // вернуть сумму num1 и num2;
}

//
void print_arr(int array[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b\]\n";

}
//Сумма всех элементов массива
int sum_arr(int array[], const int length) {
	int sum = 0;
	for (int i =0; i < length; i++)
		sum += array[i];
	return sum;
}
                                               

void x2(int num) { //num - параметр функции
	num *= 2;
}
void arr_x2(int arr[]) {
	arr[3] *= 2;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Функции void
	
	/*say_hello();                        //вызов функции, которую мы создали до main
	                                    // с типом VOID и без параметров
	                                               

	say_hello();
	std::cout << "Введите два числа ->\n";
	std::cin >> n >> m;
	
	print_sum(n, m);

	std::cout << "Введите два числа ->\n";
	std::cin >> k >> p;

	print_sum(k, p);                      //вызов функции, которую мы создали до main
	                                    // с типом VOID с двумя параметрами

	print_sum(10, 7);*/

	/*std::cout << "Введите два числа ->\n";
	std::cin >> n >> m;
	int result = sum(n, m);  //Запись в переменную  result результата работы функции sum
	std::cout << "Сумма = " << result << "\n";*/

	//сумма всех элементов массива
	/*const int size = 5;
	int arr[size]{ 7, 2, 1, 10, 8 };
	std::cout << "Массив\n";
	print_arr(arr, size);
	std::cout << "Сумма элементов массива: " << sum_arr(arr, size) << std::endl;*/

	n = 10;
	//std::cout << x2(n) << '\n';
	x2(n); // n является аргументом функции
	std::cout << n << '\n'; // 10

	int mass[5]{ 10, 20, 30, 40, 50 };
	x2(mass[3]);
		std::cout << mass[3] << '\n';







	




	



	return 0;

}