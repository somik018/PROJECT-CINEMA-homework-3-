#include<iostream> //директива процессора, подключающая библиотеки
#include<string> //библиотека для работы со строками
#include<vector> //библиотека для работы с векторами
#include<exception> //библиотека для работы с исключениями 
#include<ctime> //библиотека для работы с ГПСЧ
#include<stdexcept> //библиотека для работы с исключениями
#include<cstdlib> //библиотека для работы с ГПСЧ
using namespace std; //
#include"version.h"
#include"lib.h"

class User //создаем класс 
{
public: //открытый модификатор доступа
	User() //создаем конструктор
	{
		string mail, phone_number; //берем поля, которыеми позже заполним нужные нам
		cout << "Welcome to the online cinema <N>" << endl; //выводим на консоль приветствие
		cout << "To view it, log on!" << endl; //выводим на консоль просьюу зарегистрироваться
		cout << "Please, enter your mail: "; //выводим на консоль просьбу о вводе почты
		cin >> mail; //передаем значение в временное поле
		cout << "Please, enter your phone number: "; //выводим на консоль просьбу написать номер
		cin >> phone_number; //перенимаем значение
		this->mail = mail; //передаем значение полю 1
		this->phone_number = phone_number; //передаем значение полю 2
		cout << "Checking your data..." << endl; //вывоим на консоль оповещение о проверке
	}
	string get_mail() { //делаем геттер для 1 поля
		return mail; //возвращаем значение
	}
	string get_phone_number() { //делаем геттер для 2 поля
		return phone_number;  //возвращаем значение
	}
	void set_password(int password) //делаем сеттер для 3 поля
	{
		this->password = password; //передаем значение
	}
	void set_password(string a) //делаем сеттер для 4 поля (происходит перегрузка метода)
	{
		password2 = a; //передаем значение
	}
	string get_password2() //делаем геттер для 4 поля
	{
		return password2; //возвращаем значение
	}
	int get_password() //делаем геттер для 3 поля
	{
		return password; //возвращаем значение
	}
	void checking_data() //создаем метод 1, проверки данных 
	{

		string a, b; //делаем временные перменные для записи
		a = get_mail(); //записываем значение 1 поля
		b = get_phone_number(); //записываем значение 2 поля
		int v = a.find("@yandex.ru", 0); //находим значение индекса, если значение не найдется выдасться -1
		int c = a.find("@mail.ru", 0); //я не просто так поставила инт потому, что ,если не ставить там будет большое число, но при переводе в инт он становится -1
		if (a.empty() == 1 || b.empty() == 1) //проверяем пустые ли они(чтобы не были = 1) 
		{
			throw logic_error("logic_error"); //если да, то троуф сообщает об этом 
		}
		else if (c < 0 && v < 0) //проверяем правильно ли ввел пользователь почту(чтобы значения оба не были -1)
		{
			throw runtime_error(0); //если нет, то троуф сообщает об этом
		}
		else if (b.find("7", 0) != 0 || b.size() < 11) //проверяем правльность написания номера(первая 7 и всего 11)
		{
			throw runtime_error(0); //если неправильно, троуф сообщает об этом 
		}
		else //если все прошло хорошо
		{
			cout << "The check was successful!" << endl; //выводим на консоль оповещание об успешной проверке
		}
	}
	void password1(User& a) //создаем метод 2, в параметр берем объект, работает с паролем
	{
		string answer; //создаем временную строку для ответа
		cout << "Generate a password? Answer yes or no: "; //выводим на консоль просьбу о генерации пароля, просим ответить да или нет
		cin >> answer; //пердаем значение
		if (answer == "yes") //если ответ да, то срабатывает этот блок кода
		{
			a.set_password(rand() % 10000 + 1000); //сеттером устанавливаем значение для 4 значного пароля
			cout << "Your password: " << a.get_password() << endl; //выодим на консоль пароль при помощи геттера(прошу заметить инт!)
			cout << "Registration is completed!" << endl; //выводим на консоль сообщение об успешной регистрации
		}
		else if (answer == "no") //если ответ нет, то срабатывает этот блок кода
		{
			string c; //создаем перменную для перекидок значения
			cout << "Come up with a password of 4 digits: "; //выводим на консоль просьбу о создании пароля
			cin >> c; //передаем занчение
			a.set_password(c); //сеттером устанавливаем значение(прошу заметить стринг!)
			if (c.size() > 5 || c.size() < 4) //если размер строки больше 5 и меньше 4, то срабатывает этот блок кода 
			{
				throw range_error("!Invalid value!"); //троуф сообщает об исключении
			}
			else {
				cout << "Registration is completed!" << endl; //если все хорошо выводим на консоль сообщениее об успехе
			}
		}
		else
		{
			cout << "You obviously did something wrong!" << endl; //если все еще не так, то выводим на консоль соообщение об ошибке пользователя
		}
	}
	void films() //создаем метод 3, подбирающий фильмы
	{
		int c = 1; //для пересчете на выводе создаем переменную
		int b; //объявляем переменную для перекидок значения
		vector<string>the_best_films = { "A Space Odyssey", "The Godfather", "Jaws", "Alien", "Saw", "Psyho", "The Silence of the lambs", "Insidious", "1+1", "Forrest Gump" }; //создаем вектор с типом данных стринг и с названиями фильмов(их 10)
		cout << "What film do you want to watch today?" << endl; //выводим на консоль вопрос о просмотре фильма
		cout << "Here is a list of the best films for this month" << endl; //выводим на консоль список лучших фильмов за месяц
		for (int i = 0; i < 10; i++) //циклом выводим названия фильма
		{
			cout << c << ". " << the_best_films[i] << "." << endl; //выводим на консоль в столбик
			c++; //для пересчета 
		}
		cout << "If you liked one of them, write a number to start viewing: "; //выводим на консоль просьбу о выборе фильма
		cin >> b; //получаем значение
		if (b > 11) //если значение выходит за пределы вектора
		{
			throw out_of_range("I`m sorry but we don`t have such a film!"); //троуф сообщает об исключении
		}
		else if (b <= 0) //если меньше нужного значения 
		{
			throw underflow_error("We don`t have bad films!"); //троуф сообщает об исключении
		}
		else
		{
			cout << "Enjoy the movie!" << endl; //если все хорошо, то выводим сообщение об окончании программы
		}
	}
	~User() {}; //условный деструктор
private: //приватный модификатор доступа
	string mail; //поле 1
	string phone_number; //поле 2
	int password; //поле 3
	string password2; //поле 4
};
void catchs()
{
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
	catchs();
}