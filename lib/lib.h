#pragma once //������������� ������� ����������� ������������� �����
#include<iostream> //��������� ����������, ������������ ����������
#include<string> //���������� ��� ������ �� ��������
#include<vector> //���������� ��� ������ � ���������
#include<exception> //���������� ��� ������ � ������������ 
#include<ctime> //���������� ��� ������ � ����
#include<stdexcept> //���������� ��� ������ � ������������
#include<cstdlib> //���������� ��� ������ � ����
using namespace std; //������������ ����

class User {
public: //�������� ����������� �������
	User() //������� �����������
	{
		string mail, phone_number; //����� ����, ��������� ����� �������� ������ ���
		cout << "Welcome to the online cinema <N>" << endl; //������� �� ������� �����������
		cout << "To view it, log on!" << endl; //������� �� ������� ������� ������������������
		cout << "Please, enter your mail: "; //������� �� ������� ������� � ����� �����
		cin >> mail; //�������� �������� � ��������� ����
		cout << "Please, enter your phone number: "; //������� �� ������� ������� �������� �����
		cin >> phone_number; //���������� ��������
		this->mail = mail; //�������� �������� ���� 1
		this->phone_number = phone_number; //�������� �������� ���� 2
		cout << "Checking your data..." << endl; //������ �� ������� ���������� � ��������
	}
	string get_mail() { //������ ������ ��� 1 ����
		return mail; //���������� ��������
	}
	string get_phone_number() { //������ ������ ��� 2 ����
		return phone_number;  //���������� ��������
	}
	void set_password(int password) //������ ������ ��� 3 ����
	{
		this->password = password; //�������� ��������
	}
	void set_password(string a) //������ ������ ��� 4 ���� (���������� ���������� ������)
	{
		password2 = a; //�������� ��������
	}
	string get_password2() //������ ������ ��� 4 ����
	{
		return password2; //���������� ��������
	}
	int get_password() //������ ������ ��� 3 ����
	{
		return password; //���������� ��������
	}
	~User() {}; //�������� ����������
private: //��������� ����������� �������
	string mail; //���� 1
	string phone_number; //���� 2
	int password; //���� 3
	string password2; //���� 4
}; //������� ����� 
void checking_data(User&r); //���������� ������� 1
void password1(User& a); //���������� ������� 2
void films(); //���������� ������� 3 
