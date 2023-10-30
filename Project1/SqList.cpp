#include<iostream>:
#include<stdio.h>;
using namespace std;
#define initSize 10;

typedef struct seqlist {
	int* data;
	int size;
};

/*数据元素插入*/
void insertList(int *nums,int size,int num,int index){
	/*索引index后所有元素向后移一位，插入num*/
	for (int i = size - 1; i >= index; i--) {
		nums[i + 1] = nums[i];
	}
	nums[index] = num;
}

