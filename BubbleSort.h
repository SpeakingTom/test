#pragma once
#include<vector>
using namespace std;

vector<int> BubbleSort(vector<int> arr) {
	for (unsigned int i = 0; i < arr.size() - 1; ++i)
	{//从第一个数开始冒泡比较
		for (unsigned int j = 0; j < arr.size() - 1-i; j++) {//每次比较size-i次
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}
	return arr;
}