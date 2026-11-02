#pragma once
#include<stdio.h>
#include<stdlib.h>
#define SeqList_type int //方便使用其它类型变量
//动态顺序表(顺序表的本质是数组)
typedef struct SeqList
{
	SeqList_type* arr;
	int size;//数组的有效个数
	int capacity;//数组的容量
}sl;
//seqlist_print(输出测试结果)YES
void SeqLisr_print(sl* ps);
//seqlist_init（初始化顺序表）YES
void SeqList_init(sl* ps);
//seqlist_capacity(判断扩容)YES
void SeqList_capacity(sl* ps);
//seqlist_push_back(尾插)YES
void SeqList_push_back(sl* ps,SeqList_type x);
//seqlist_push_front(头插)YES
void SeqList_push_front(sl* ps, SeqList_type x);
//seqlist_pop_back(尾部删除)YES
void SeqList_pop_back(sl* ps);
//seqlist_pop_front(头部删除)
void SeqList_pop_front(sl* ps);