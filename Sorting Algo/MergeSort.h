void merge(int *arr, int leftStart, int leftEnd, int rightStart, int rightEnd) {
	int arrSize = rightEnd - leftStart + 1;
	int tempPos = 0;
	int *tempArr= new int[arrSize];
	while (leftStart <= leftEnd && rightStart <= rightEnd) {
		if (arr[leftStart] < arr[rightStart]) {
			tempArr[tempPos] = arr[leftStart];
			tempPos++;
			leftStart++;
		}
		else {
			tempArr[tempPos] = arr[rightStart];
			tempPos++;
			rightStart++;
		}
	}

	while (leftStart <= leftEnd) {
		tempArr[tempPos] = arr[leftStart];
		tempPos++;
		leftStart++;
	}

	while (rightStart <= rightEnd)
	{
		tempArr[tempPos] = arr[rightStart];
		tempPos++;
		rightStart++;

	}

	for (int i = arrSize-1; i>=0; i--) {
		arr[rightEnd] = tempArr[i];
		rightEnd--;
	}
	delete []tempArr;
}

void mergeSort(int *arr, int left, int right) {
	if (left >= right)
		return;


	int mid = (right + left ) / 2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	
	merge(arr, left, mid, mid + 1, right);
}