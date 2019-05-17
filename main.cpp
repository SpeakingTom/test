#include<iostream>
#include<vector>
using namespace std;

#include"BubbleSort.h"		//冒泡排序
#include"QuickSort.h"		//快速排序
#include"InsertSort.h"		//插入排序
#include"HeapSort.h"		//堆排序

void output(vector<int>arr) {
	for (std::vector<int>::iterator m = arr.begin(); m != arr.end(); m++){//用迭代器的方式输出容器对象的值
		cout << *m <<' '; //这里依次输出vector的值
	}
	cout << endl;
}

int main() {
	vector<int>arr = { 4,2,1,5,8,4,43,2,5 };
	vector<int>ARR1,ARR2,ARR3;
	//ARR1 = BubbleSort(arr);
	//ARR2 = InsertSort(arr);
	Quick_Sort(arr, 0, arr.size()-1);
	output(arr);
	//output(ARR2);
	getchar();
	return 0;
}