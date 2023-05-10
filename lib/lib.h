#pragma once //останавливает двойное подключение заголовочного файла
#include<iostream> //директива процессора, подключающая библиотеки
#include<string> //библиотека для работы со строками
#include<vector> //библиотека для работы с векторами
#include<exception> //библиотека для работы с исключениями 
#include<ctime> //библиотека для работы с ГПСЧ
#include<stdexcept> //библиотека для работы с исключениями
#include<cstdlib> //библиотека для работы с ГПСЧ
using namespace std; //пространство имен

class User {
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
	~User() {}; //условный деструктор
private: //приватный модификатор доступа
	string mail; //поле 1
	string phone_number; //поле 2
	int password; //поле 3
	string password2; //поле 4
}; //создаем класс 
void checking_data(User&r); //декларация функции 1
void password1(User& a); //декларация функции 2
void films(); //декларация функции 3 
