#pragma once
void Quick_Sort(vector<int> &arr, int left, int right) {
	if (left >= right) {// ���left >= right, ˵������ֻ��һ��Ԫ���� ��ֹ;
		return;
	}
	int L = left; int R = right;
	int pivot = arr[L];			//��׼Ԫ��ѡ��
	while (L < R) {
		while (L < R && arr[R] >= pivot)
			R--;			// ���������ҵ�һ��С�ڻ�׼����
		if (L < R) {
			arr[L] = arr[R];//arr[L]=arr[R],L+=1;
			L++;
		}
		while (L < R && arr[L] < pivot)// ���������ҵ�һ�����ڻ�׼����
			L++;
		if (L < R) {
			arr[R] = arr[L];
			R--;
		}
	}
	arr[L] = pivot;//�����������
	Quick_Sort(arr, left, L - 1);		//����߲��ֵݹ����
	Quick_Sort(arr, L + 1, right);		//���ұ߲��ֵݹ����
}

/*
vector<int> QuickSort() {
	int Left = 0;
	int Right = arr.size()-1;
	Quick_Sort(arr, Left, Right);
	return arr;
}*/