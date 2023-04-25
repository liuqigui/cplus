#pragma once	//��ֹ�ļ��ظ�����
#include<iostream>	//��������������ļ�
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"
#include<fstream>

#define FILENAME "empFile.txt"
using namespace std;

class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�����
	void exitSystem();

	//���ְ��
	void Add_Emp();

	//��¼�ļ��е���Ա����
	int m_EmpNum;

	//Ա�������ָ��
	Worker ** m_EmpArray;

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void show_Emp();

	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//�������
	void Clean_File();

	//��������
	~WorkerManager();

	
};
