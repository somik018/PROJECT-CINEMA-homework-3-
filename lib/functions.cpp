#include "lib.h" //���������� ����������� ���� �� ���������� 



void checking_data(User&r) //������� ����� 1, �������� ������ 
{

	string a, b; //������ ��������� ��������� ��� ������
	a = r.get_mail(); //���������� �������� 1 ����
	b = r.get_phone_number(); //���������� �������� 2 ����
	int v = a.find("@yandex.ru", 0); //������� �������� �������, ���� �������� �� �������� ��������� -1
	int c = a.find("@mail.ru", 0); //� �� ������ ��� ��������� ��� ������, ��� ,���� �� ������� ��� ����� ������� �����, �� ��� �������� � ��� �� ���������� -1
	if (a.empty() == 1 || b.empty() == 1) //��������� ������ �� ���(����� �� ���� = 1) 
	{
		throw logic_error("logic_error"); //���� ��, �� ����� �������� �� ���� 
	}
	else if (c < 0 && v < 0) //��������� ��������� �� ���� ������������ �����(����� �������� ��� �� ���� -1)
	{
		throw runtime_error(0); //���� ���, �� ����� �������� �� ����
	}
	else if (b.find("7", 0) != 0 || b.size() < 11) //��������� ����������� ��������� ������(������ 7 � ����� 11)
	{
		throw runtime_error(0); //���� �����������, ����� �������� �� ���� 
	}
	else //���� ��� ������ ������
	{
		cout << "The check was successful!" << endl; //������� �� ������� ���������� �� �������� ��������
	}
}
void password1(User& a) //������� ����� 2, � �������� ����� ������, �������� � �������
{
	string answer; //������� ��������� ������ ��� ������
	cout << "Generate a password? Answer yes or no: "; //������� �� ������� ������� � ��������� ������, ������ �������� �� ��� ���
	cin >> answer; //������� ��������
	if (answer == "yes") //���� ����� ��, �� ����������� ���� ���� ����
	{
		a.set_password(rand() % 10000 + 1000); //�������� ������������� �������� ��� 4 �������� ������
		cout << "Your password: " << a.get_password() << endl; //������ �� ������� ������ ��� ������ �������(����� �������� ���!)
		cout << "Registration is completed!" << endl; //������� �� ������� ��������� �� �������� �����������
	}
	else if (answer == "no") //���� ����� ���, �� ����������� ���� ���� ����
	{
		string c; //������� ��������� ��� ��������� ��������
		cout << "Come up with a password of 4 digits: "; //������� �� ������� ������� � �������� ������
		cin >> c; //�������� ��������
		a.set_password(c); //�������� ������������� ��������(����� �������� ������!)
		if (c.size() > 5 || c.size() < 4) //���� ������ ������ ������ 5 � ������ 4, �� ����������� ���� ���� ���� 
		{
			throw range_error("!Invalid value!"); //����� �������� �� ����������
		}
		else {
			cout << "Registration is completed!" << endl; //���� ��� ������ ������� �� ������� ���������� �� ������
		}
	}
	else
	{
		cout << "You obviously did something wrong!" << endl; //���� ��� ��� �� ���, �� ������� �� ������� ���������� �� ������ ������������
	}
}
void films() //������� ����� 3, ����������� ������
{
	int c = 1; //��� ��������� �� ������ ������� ����������
	int b; //��������� ���������� ��� ��������� ��������
	vector<string>the_best_films = { "A Space Odyssey", "The Godfather", "Jaws", "Alien", "Saw", "Psyho", "The Silence of the lambs", "Insidious", "1+1", "Forrest Gump" }; //������� ������ � ����� ������ ������ � � ���������� �������(�� 10)
	cout << "What film do you want to watch today?" << endl; //������� �� ������� ������ � ��������� ������
	cout << "Here is a list of the best films for this month" << endl; //������� �� ������� ������ ������ ������� �� �����
	for (int i = 0; i < 10; i++) //������ ������� �������� ������
	{
		cout << c << ". " << the_best_films[i] << "." << endl; //������� �� ������� � �������
		c++; //��� ��������� 
	}
	cout << "If you liked one of them, write a number to start viewing: "; //������� �� ������� ������� � ������ ������
	cin >> b; //�������� ��������
	if (b > 11) //���� �������� ������� �� ������� �������
	{
		throw out_of_range("I`m sorry but we don`t have such a film!"); //����� �������� �� ����������
	}
	else if (b <= 0) //���� ������ ������� �������� 
	{
		throw underflow_error("We don`t have bad films!"); //����� �������� �� ����������
	}
	else
	{
		cout << "Enjoy the movie!" << endl; //���� ��� ������, �� ������� ��������� �� ��������� ���������
	}
}