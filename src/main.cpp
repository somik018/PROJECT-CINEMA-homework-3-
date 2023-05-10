
#include"version.h"
#include"lib.h"


int main() //�������, � ������� ��� ����������
{
	srand(time(nullptr)); //��� ��������� ������� ���������� ��������
	cout << "PROJECT VERSION " << (PROJECT_VERSION) << endl;
	User person; //������� ������(��������� ����������� �����������)
	try { //��� ������ ����������
		person.checking_data(); //�������� ����� 1
		person.password1(person); //�������� ����� 2
		person.films(); //�������� ����� 3��� g
	}
	catch (out_of_range err) //��������� ���������� � ������� �� ������� �������
	{
		cout << err.what() << endl; //������� ��, ��� ������� � �����
	}
	catch (logic_error err) //��������� ���������� � ����������� ��������
	{
		cout << "You haven`t entered the data!" << err.what() << endl; //������� ��������� �� ������
	}
	catch (range_error err) //��������� ���������� � ������������� ����������
	{
		cout << err.what() << endl; //������� �� �������, �� ��� ���� � �����
	}
	catch (underflow_error err) //��������� ���������� � �������������� ����������
	{
		cout << err.what() << endl; //������� �� �������, �� ��� ���� � �����
	}
	catch (runtime_error err) //��������� ���������� ���������������
	{
		cout << "Data entered incorrectly! Please, try again." << endl; //������� �� ������� ��������� �� ������
	}
}