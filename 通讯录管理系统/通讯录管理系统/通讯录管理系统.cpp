#include<iostream>
#include<string>

using namespace std;

#define MAX 1000	//�������

//��װ������ʾ���棬void showMenu()
void shouwMenu() {
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

//��ϵ��struct
struct Person
{
	string m_Name;	//����
	int m_Gendar;	//�Ա�	1 �� 2 Ů
	int m_Age;		//����
	string m_Phone;	//�绰
	string m_Addr;	//סַ
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	Person personArray[MAX];	//ͨѶ¼�б������ϵ������
	int m_Size;	//ͨѶ¼����Ա����
};

//1.�����ϵ��
void addPerson(Addressbooks * abs) {
	//�ж�ͨѶ¼�Ƿ����ˣ�������˾Ͳ��������
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼����������" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;

		while (true)
		{	
			//����������1����2�����˳�ѭ�������������������������
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Gendar = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}
		
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "������סַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;	//�����Ч��

		cout << "��ϲ�㣬��ӳɹ���" << endl;
		system("pause");
		system("cls");	//����
	}

}

//2.��ʾ���е���ϵ��
void showPerson(Addressbooks * abs) {
	//�ж�ͨѶ¼�е������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Gendar == 1?"��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;

		}
	}
	system("pause");
	system("cls");	//����
}

//3.ɾ����ϵ��

//3.1 ��װ�����ϵ���Ƿ����,1�±��ţ�0����-1
int isExist(Addressbooks * abs, string name) {	//ͨѶ¼�ͶԱ�����
	for (int i = 0; i < abs->m_Size; i++) {
		//�ҵ����������
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
		else {
			return -1;
		}
	}
}

//3.2 ��װɾ����ϵ�˺���
void deletPerson(Addressbooks * abs) {
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1) {	//��ret���������ǰ�ƶ�����m.size-1
		for (int i = ret; i < abs->m_Size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	else {
		cout << "���޴���!" << endl;
	}

	system("pause");
	system("cls");
}

//4.������ϵ��
void findPerson(Addressbooks * abs) {
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;

	string name;
	cin >> name;
	
	int ret = isExist(abs, name);

	if (ret != -1) {	//�ҵ���
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Gendar == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else {	//δ�ҵ�
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}

//5.�޸���ϵ��
void modifyPerson(Addressbooks * abs) {
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {	//�ҵ���
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {	//������ȷ��
				abs->personArray[ret].m_Gendar = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}
		
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//סַ
		cout << "������סַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ���" << endl;

	}
	else {	//δ�ҵ�
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}

//6.�����ϵ��
void cleanPerson(Addressbooks * abs) {
	int i;
	cout << "��ȷ����գ�" << endl;
	cout << "1 --- ȷ��" << endl;
	cout << "2 --- ȡ��" << endl;
	cin >> i;
	if (i == 1) {
		abs->m_Size = 0;
		cout << "ͨѶ¼�Ѿ���գ�" << endl;
		system("pause");
		system("cls");
	}
	else {
		system("pause");
		system("cls");
	}

}

int main() {
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;


	int select = 0;	//�����û�ѡ������ı���

	while (true)
	{
		//�˵��ĵ���
		shouwMenu();

		cin >> select;
		switch (select)
		{
		case 1:	//�����ϵ��
			addPerson(&abs);	//���õ�ַ���ݣ������޸�ʵ��
			break;
		case 2:	//��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: {//ɾ����ϵ��
			deletPerson(&abs);
			//cout << "������ɾ����ϵ��������" << endl;
			//string name;
			//cin >> name;

			//if (isExist(&abs, name) == -1) {
			//	cout << "���޴���" << endl;
			//}
			//else {
			//	cout << "�ҵ����ˣ�" << endl;
			//}
			break; 
		}
		case 4:	//������ϵ��
			findPerson(&abs);
			break;
		case 5:	//�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:	//�����ϵ��
			cleanPerson(&abs);
			break;
		case 0:	//�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			//system("pause");
			goto exit_loop;
			break;
		default:
			cout << "��������ȷ����" << endl;
			break;
		}
		//�˳����ܣ��˳�ͨѶ¼ϵͳ
	}

exit_loop:
	system("pause");
	return 0;
}