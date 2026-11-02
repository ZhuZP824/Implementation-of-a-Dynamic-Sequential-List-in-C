#include"SeqList.h"
//seqlist_print(输出测试结果)
void SeqLisr_print(const sl* ps)
{
	printf("arr: ");
	for (int i = 0;i < ps->size;i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
	printf("size=%d\ncapacity=%d\n", ps->size, ps->capacity);

}
//seqlist_init（初始化顺序表）
void SeqList_init(sl*ps)
{
	//ps->arr = NULL;//初始化成0
	SeqList_type* p = (SeqList_type*)malloc(sizeof(SeqList_type)*4);//或者初始四个空间
	if (p == NULL)
	{
		printf("malloc失败\n");
		exit(-1);
	}
	ps->arr = p;
	ps->size = 0;//有效个数不会改变
	//ps->capacity = 0;//初始化为0则0
	ps->capacity = 4;//初始化为4则4
}
//seqlist_capacity(判断扩容)
void SeqList_capacity(sl* ps)
{
	SeqList_type* p = ps->arr;
	p = (SeqList_type*)realloc(ps->arr, (ps->capacity)*sizeof(SeqList_type)*2);//注意类型
	if (p == NULL)//扩容失败直接终止程序
	{
		exit(-1);
	}
	ps->arr = p;
	ps->capacity = ps->capacity * 2;
}
//seqlist_push_back(尾插)
void SeqList_push_back(sl* ps,SeqList_type x)
{
	if (ps->size == ps->capacity)//有效个数等于容量时扩容
	{
		SeqList_capacity(ps);
	}
	ps->arr[ps->size] = x;
	ps->size++;//插入后有效数据加1
}
//seqlist_push_front(头插)
void SeqList_push_front(sl* ps, SeqList_type x)
{
	if (ps->size == ps->capacity)//有效个数等于容量时扩容
	{
		SeqList_capacity(ps);
	}
	for (int i = ps->size - 1;i >= 0;i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = x;
	ps->size++;
}
//seqlist_pop_back(尾部删除)
void SeqList_pop_back(sl* ps)
{
	ps->arr[ps->size - 1] = 0;//此处可省略
	ps->size--;
}
//seqlist_pop_front(头部删除)
void SeqList_pop_front(sl* ps)
{
	for (int i = 0;i <= ps->size - 2;i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
