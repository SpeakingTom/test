#pragma once
#include<vector>
using namespace std;

vector<int> BubbleSort(vector<int> arr) {
	for (unsigned int i = 0; i < arr.size() - 1; ++i)
	{//�ӵ�һ������ʼð�ݱȽ�
		for (unsigned int j = 0; j < arr.size() - 1-i; j++) {//ÿ�αȽ�size-i��
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}
	return arr;
}