#pragma once
#include<vector>
//假设前n项已经排好序，插入第N+1项，使得N+1项也排好序
vector<int> InsertSort(vector<int>arr) {
	for (unsigned int i = 1; i < arr.size(); i++) {//第二个数到最后一个数执行插入
		for (int j = i ; j > 0; j--) {//插入过程
			if (arr[j] < arr[j-1]) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}	
		}
	}
	return arr;
}