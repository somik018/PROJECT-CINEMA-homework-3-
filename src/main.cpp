
#include"version.h"
#include"lib.h"


int main() //функция, с которой все начинатеся
{
	srand(time(nullptr)); //для получения разного стартового значения
	cout << "PROJECT VERSION " << (PROJECT_VERSION) << endl;
	User person; //создаем объект(автоматом срабатывает конструктор)
	try { //для поиска исключений
		person.checking_data(); //вызываем метод 1
		person.password1(person); //вызываем метод 2
		person.films(); //вызываем метод 3пше g
	}
	catch (out_of_range err) //обработка исключений с выходом за пределы вектора
	{
		cout << err.what() << endl; //выводим то, что введено в троуф
	}
	catch (logic_error err) //обработка исключений с логическими ошибками
	{
		cout << "You haven`t entered the data!" << err.what() << endl; //выводим сообщение об ошибке
	}
	catch (range_error err) //обработка исключений с неправильными значениями
	{
		cout << err.what() << endl; //выводим на консоль, то что было в троуф
	}
	catch (underflow_error err) //обработка исключений с отрицательными значениями
	{
		cout << err.what() << endl; //выводим на консоль, то что было в троуф
	}
	catch (runtime_error err) //обработка исключения неопределенного
	{
		cout << "Data entered incorrectly! Please, try again." << endl; //выводим на консоль сообщение об ошибке
	}
}