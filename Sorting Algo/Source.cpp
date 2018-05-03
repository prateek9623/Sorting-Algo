#include<iostream>
#include"MergeSort.h"

using namespace std;

int main(int argc, char* argv[]) {
	int arr[] = { 10,20, 90, 80 ,60, 40, 70,50,30 };

	mergeSort(arr,0,8);

	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	_getwch();
	return 0;
}



