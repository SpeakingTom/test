#include<iostream>
#include<vector>
using namespace std;

#include"BubbleSort.h"		//ð������
#include"QuickSort.h"		//��������
#include"InsertSort.h"		//��������
#include"HeapSort.h"		//������

void output(vector<int>arr) {
	for (std::vector<int>::iterator m = arr.begin(); m != arr.end(); m++){//�õ������ķ�ʽ������������ֵ
		cout << *m <<' '; //�����������vector��ֵ
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