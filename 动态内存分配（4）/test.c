#include <stdio.h>

//经典笔试题 

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
//	//返回栈空间的地址的问题
//	//这里GetMemory的确返回了p指向的地址，但是p是函数Getmemory的局部变量
//	//是在栈区间上开辟的，生命周期只在函数内部，出了函数，空间就被释放了
//	//再次访问时，可能已经放了其他内容了
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//////返回栈空间的地址的问题
////
////int* test()
////{
////	int a = 10; //（error）栈区 出了函数，空间就被释放了，这块空间就不存在了
////	static int a = 10;  //静态区
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
//	int* ptr = malloc(100);  //堆区
//	//ptr虽然被销毁了，但是开辟的个字节的空间还在，free之后才能回收
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
//	//这里ptr是一个随机指针变量，ptr里面放的是随机值 - 野指针
//	//对其解引用，就是非法访问内存空间
//	return ptr;
//}

//高质量C++/C编程指南    -   书

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
//	//这里忘记释放动态开辟的内存，导致内存泄露，但是能输出结果
//	//改进：
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
//	//考点：  将str指向的空间释放了，但是不会将它置空NULL
//	//放一个 str=NULL,根据原始代码逻辑比较合理
//	str = NULL;
//	if (str != NULL)     //这里用判断，是为了确定它是合法指针再赋值
//	{					//，否则直接给NULL赋值，程序会崩溃
//		strcpy(str, "world");
//		//这里就将world拷贝进去，非法访问内存（被释放了的空间再次被访问）
//		printf(str);
//	}
//}
//
//int main() 
//{
//	Test();
//	return 0;
//}


//C和指针   -  书