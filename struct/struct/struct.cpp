#include<iostream>
#include<string>
#include<ctime>

using namespace std;

//1.����һ��ѧ������������
//struct  Student
//{
//	//��Ա�б�
//
//	//����
//	string name;
//
//	//����
//	int age;
//
//	//����
//	int score;
//
//}s3;

//2.ͨ��ѧ�����ʹ���ѧ��
//2.1struct Student s1
//2.2 struct Student s2 = {...}
//2.3 �ڶ���ṹ���ʱ��˳�㴴���ṹ�����

//8.3�ṹ������
//�﷨��struct �ṹ���� ������[Ԫ�ظ���] = {{...},{...}}
//�ṹ������
//8.3.1.����ṹ��
//struct  Student
//{
//	//��Ա�б�
//
//	//����
//	string name;
//
//	//����
//	int age;
//
//	//����
//	int score;
//
//};

//8.4�ṹ��ָ��
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};

//8.5�ṹ��Ƕ��
//struct  Student {
//	string name;
//	int age;
//	int score;
//};
//struct Teacher {
//	int id;
//	string name;
//	int age;
//	struct Student stu;
//};

////8.6�ṹ������������
////���ã����ṹ����Ϊ���������д���
////���ݷ�ʽ��ֵ���ݺ͵�ַ����
//struct  Student {
//	string name;
//	int age;
//	int score;
//};
////1.ֵ����
//void printStrudent1(Student s1) {
//	s1.age = 100;	//main���沢û���޸�
//	cout << "name:" << s1.name << "age:" << s1.age << "scroe:" << s1.score << endl;
//}
////2.��ַ����
//void printStrudent2(Student * p) {
//	p->age = 200;	//main����Ҳ�޸���
//	cout << "name:" << p->name << " age:" << p->age << " score:" << p->score << endl;
//}

////8.7�ṹ����const��ʹ�ó���
//struct  Student {
//	string name;
//	int age;
//	int score;
//};
////�������е��βθ�Ϊָ����Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ���
//void printStrudent1(const Student *s1) {
//	//s1->age = 100;	//main���沢û���޸�
//	cout << "name:" << s1->name << "age:" << s1->age << "scroe:" << s1->score << endl;
//}

////8.8�ṹ�尸��
//struct Student {
//	string sName;
//	int score;
//};
//struct Teacher {
//	string tName;
//	struct Student sArray[5];
//};
//void allocateSpace(Teacher tArray[], int len) {
//
//	string nameSeed = "ABCDE";
//
//	for (int i = 0; i < len; i ++ ) {
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//
//		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
//		for (int j = 0; j < 5; j++) {
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//
//			int random = rand() % 61 + 40;	//�����40~99
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//void printInfo(struct Teacher tArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "teacher_name:" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "student_name:" << tArray[i].sArray[j].sName << " ";
//			cout << "student_score:" << tArray[i].sArray[j].score<< endl;
//		}
//	}
//}

//8.9����
struct Hero
{
	string name;
	int age;
	string gendar;
};
//ð������ ʵ���������� 
void bubbleSort(Hero heroArray[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (heroArray[j].age > heroArray[j + 1].age) {
				Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}
//��ӡ���
void printInfo(Hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "����:" << heroArray[i].name << " age:" << heroArray[i].age << " gendar:" << heroArray[i].gendar << endl;
	}
}

int main() {
	////2.1struct Student s1
	//struct Student s1;	//struct�ؼ��ֿ���ʡ��
	//s1.name = "����";
	//s1.age = 18;
	//s1.score = 100;

	//cout << "name:" << s1.name << "age:" << s1.age << "scroe:" << s1.score << endl;

	////2.2 struct Student s2 = {...}
	//struct Student s2 = { "����", 19, 80 };
	//cout << "name:" << s2.name << "age:" << s2.age << "scroe:" << s2.score << endl;

	////2.3 �ڶ���ṹ���ʱ��˳�㴴���ṹ�����
	//s3.name = "����";
	//s3.age = 20;
	//s3.score = 60;
	//cout << "name:" << s3.name << "age:" << s3.age << "scroe:" << s3.score << endl;
	


	//8.3.2.�����ṹ������
	//struct Student stuArray[3] = 
	//{
	//	{"����", 18, 100},
	//	{"����", 28, 99},
	//	{"����", 38, 66}
	//};
	//stuArray[2].name = "����";
	//stuArray[2].age = 80;
	//stuArray[2].score = 60;

	//for (int i = 0; i < 3; i++) {
	//	cout << "name:" << stuArray[i].name
	//		<< "age:" << stuArray[i].age
	//		<< "score:" << stuArray[i].score << endl;
	//}

	////8.4.1�����ṹ�����
	//struct Student s = { "����", 18 ,100 };

	////8.4.2ͨ��ָ��ָ��ṹ�����
	//Student * p = &s;
	//
	////8.4.3ͨ��ָ����ʽṹ�����
	//cout << "name:" << p->name << "age:" << p->age << "score:" << p->score << endl;

	////8.5.1�����ṹ�����
	//Teacher t;
	//t.id = 10000;
	//t.name = "����";
	//t.age = 50;
	//t.stu.name = "С��";
	//t.stu.age = 20;
	//t.stu.score = 60;

	//cout << t.id << t.name << t.age << t.stu.name << t.stu.age << t.stu.score << endl;

	////8.6.1�����ṹ�����
	//Student s;
	//s.name = "����";
	//s.age = 20;
	//s.score = 85;
	//cout << "name:" << s.name << "age:" << s.age << "scroe:" << s.score << endl;
	//printStrudent1(s);
	//cout << "name:" << s.name << "age:" << s.age << "scroe:" << s.score << endl;
	//printStrudent2(&s);
	//cout << "name:" << s.name << "age:" << s.age << "scroe:" << s.score << endl;

	////8.7.1�����ṹ�����
	//Student s = { "����", 15, 70 };
	////��ӡ�ṹ����Ϣ
	//printStrudent1(&s);
	
	////8.8.1�����ṹ�����
	//Teacher tArray[3];
	//
	////���������
	//srand((unsigned int)time(NULL));
	////8.8.2��ʼ��ֵ
	//int len = sizeof(tArray) / sizeof(tArray[0]);
	//allocateSpace(tArray, len);
	//printInfo(tArray, len);

	//8.9
	Hero heroArray[5] = {
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"},

	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << "����:" << heroArray[i].name << " age:" << heroArray[i].age << " gendar:" << heroArray[i].gendar << endl;
	}

	bubbleSort(heroArray, len);
	printInfo(heroArray, len);

	return 0;
}