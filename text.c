#include"SeqList.h"
//顺序表初始化测试
void SeqList_test1()
{
	sl a;
	SeqList_init(&a);
}
 void SeqList_test2()//尾插测试
{
	sl a;
	SeqList_init(&a);
	SeqList_push_back(&a,5);
	SeqLisr_print(&a);
}
 void SeqList_test3()//头插测试
 {
	 sl a;
	 SeqList_init(&a);
	 SeqList_push_back(&a, 5);
	 SeqList_push_back(&a, 5);
	 SeqList_push_back(&a, 5);
	 SeqList_push_front(&a, 1);
	 SeqList_push_front(&a, 2);
	 SeqList_push_front(&a, 3);
	 SeqLisr_print(&a);
 }
 void SeqList_test4()//尾删测试
 {
	 sl a;
	 SeqList_init(&a);
	 SeqList_push_back(&a, 5);
	 SeqList_push_back(&a, 5);
	 SeqList_push_back(&a, 5);
	 SeqList_push_front(&a, 1);
	 SeqList_push_front(&a, 2);
	 SeqList_push_front(&a, 3);
	 SeqList_pop_back(&a);
	 SeqLisr_print(&a);
 }
 void SeqList_test5()//尾删测试
 {
	 sl a;
	 SeqList_init(&a);
	 SeqList_push_back(&a, 5);
	 SeqList_push_back(&a, 5);
	 SeqList_push_back(&a, 5);
	 SeqList_push_front(&a, 1);
	 SeqList_push_front(&a, 2);
	 SeqList_push_front(&a, 3);
	 SeqList_pop_front(&a);
	 SeqLisr_print(&a);
 }
int main()
{
	//SeqList_test1();////顺序表初始化测试
	//SeqList_test2();////尾插测试
	SeqList_test3();////头插测试
	//SeqList_test4();////尾删测试
	SeqList_test5();////头删测试
	return 0;
}