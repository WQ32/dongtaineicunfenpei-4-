#include <stdio.h>

//��������� 

////2.
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//����ջ�ռ�ĵ�ַ������
//	//����GetMemory��ȷ������pָ��ĵ�ַ������p�Ǻ���Getmemory�ľֲ�����
//	//����ջ�����Ͽ��ٵģ���������ֻ�ں����ڲ������˺������ռ�ͱ��ͷ���
//	//�ٴη���ʱ�������Ѿ���������������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//////����ջ�ռ�ĵ�ַ������
////
////int* test()
////{
////	int a = 10; //��error��ջ�� ���˺������ռ�ͱ��ͷ��ˣ����ռ�Ͳ�������
////	static int a = 10;  //��̬��
////	return &a;
////}
////int main()
////{
////	int* p = test();
////	*p = 20;
////	return 0;
////}
//
//int* test()
//{
//	int* ptr = malloc(100);  //����
//	//ptr��Ȼ�������ˣ����ǿ��ٵĸ��ֽڵĿռ仹�ڣ�free֮����ܻ���
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}
//
//int* f2(void)
//{
//	int* ptr;
//	*ptr = 10;
//	//����ptr��һ�����ָ�������ptr����ŵ������ֵ - Ұָ��
//	//��������ã����ǷǷ������ڴ�ռ�
//	return ptr;
//}

//������C++/C���ָ��    -   ��

////3.
//
//#include <stdlib.h>
//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//���������ͷŶ�̬���ٵ��ڴ棬�����ڴ�й¶��������������
//	//�Ľ���
//	//free(str);
//	//str=NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//// 4.
//#include <stdlib.h>
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//���㣺  ��strָ��Ŀռ��ͷ��ˣ����ǲ��Ὣ���ÿ�NULL
//	//��һ�� str=NULL,����ԭʼ�����߼��ȽϺ���
//	str = NULL;
//	if (str != NULL)     //�������жϣ���Ϊ��ȷ�����ǺϷ�ָ���ٸ�ֵ
//	{					//������ֱ�Ӹ�NULL��ֵ����������
//		strcpy(str, "world");
//		//����ͽ�world������ȥ���Ƿ������ڴ棨���ͷ��˵Ŀռ��ٴα����ʣ�
//		printf(str);
//	}
//}
//
//int main() 
//{
//	Test();
//	return 0;
//}


//C��ָ��   -  ��