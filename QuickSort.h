#pragma once
void Quick_Sort(vector<int> &arr, int left, int right) {
	if (left >= right) {// 如果left >= right, 说明数组只有一个元素了 终止;
		return;
	}
	int L = left; int R = right;
	int pivot = arr[L];			//基准元素选择
	while (L < R) {
		while (L < R && arr[R] >= pivot)
			R--;			// 从右向左找第一个小于基准的数
		if (L < R) {
			arr[L] = arr[R];//arr[L]=arr[R],L+=1;
			L++;
		}
		while (L < R && arr[L] < pivot)// 从左向右找第一个大于基准的数
			L++;
		if (L < R) {
			arr[R] = arr[L];
			R--;
		}
	}
	arr[L] = pivot;//把数填入坑中
	Quick_Sort(arr, left, L - 1);		//对左边部分递归调用
	Quick_Sort(arr, L + 1, right);		//对右边部分递归调用
}

/*
vector<int> QuickSort() {
	int Left = 0;
	int Right = arr.size()-1;
	Quick_Sort(arr, Left, Right);
	return arr;
}*/