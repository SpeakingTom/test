#pragma once
#include<vector>
//����ǰn���Ѿ��ź��򣬲����N+1�ʹ��N+1��Ҳ�ź���
vector<int> InsertSort(vector<int>arr) {
	for (unsigned int i = 1; i < arr.size(); i++) {//�ڶ����������һ����ִ�в���
		for (int j = i ; j > 0; j--) {//�������
			if (arr[j] < arr[j-1]) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}	
		}
	}
	return arr;
}