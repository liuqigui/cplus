/*
1������ϵͳ����
ְ������ϵͳ������������˾������Ա������Ϣ
���̳���Ҫ����C++��ʵ��һ�����ڶ�̬��ְ������ϵͳ

��˾��ְ����Ϊ����:��ͨԱ���������ϰ壬��ʾ��Ϣʱ����Ҫ��ʾְ����š�ְ��������ְ����λ���Լ�ְ��
��ͨԱ��ְ��:��ɾ�����������
����ְ��:����ϰ彻�������񣬲��·������Ա��
�ϰ�ְ��:����˾��������

����ϵͳ����Ҫʵ�ֵĹ�������:
���˳��������:�˳���ǰ����ϵͳ
������ְ����Ϣ:ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ:ְ����š����������ű��
����ʾְ����Ϣ:��ʾ��˾�ڲ�����ְ������Ϣ
��ɾ����ְְ��:���ձ��ɾ��ָ����ְ��
���޸�ְ����Ϣ:���ձ���޸�ְ��������Ϣ
������ְ����Ϣ:����ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
�����ձ������:����ְ����ţ���������,����������û�ָ��
����������ĵ�:����ļ��м�¼������ְ����Ϣ(���ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ��ɾ)

*/

#include<iostream>
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"

using namespace std;

int main()
{

	//���Դ���
	/*Worker * worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->showInfo();
	delete worker;*/

	class WorkerManager wm;

	int choice = 0;
	while (true) {
		//չʾ�˵���Ա����
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;

		cin >> choice;

		switch (choice) {
		case 0:		//�˳��������
			wm.exitSystem();
			break;
		case 1:		//����ְ����Ϣ
			wm.Add_Emp();
			break;
		case 2:		//��ʾְ����Ϣ
			wm.show_Emp();
			break;
		case 3:		//ɾ����ְְ��
			wm.Del_Emp();
			break;
		/*{
			int ret = wm.IsExist(5);
			if (ret != -1) {
				cout << "����" << endl;
			}
			else {
				cout << "������" << endl;
			}
			break;
		}*/
		case 4:		//�޸�ְ����Ϣ
			wm.Mod_Emp();
			break;
		case 5:		//����ְ����Ϣ
			wm.Find_Emp();
			break;
		case 6:		//���ձ������
			wm.Sort_Emp();
			break;
		case 7:		//��������ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}



	system("pause");
	return 0;
}