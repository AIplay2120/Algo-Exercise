#include<iostream>:
#include<stdio.h>;
using namespace std;
#define initSize 10;

typedef struct seqlist {
	int* data;
	int size;
};

/*����Ԫ�ز���*/
void insertList(int *nums,int size,int num,int index){
	/*����index������Ԫ�������һλ������num*/
	for (int i = size - 1; i >= index; i--) {
		nums[i + 1] = nums[i];
	}
	nums[index] = num;
}

