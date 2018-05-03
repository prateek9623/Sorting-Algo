void quickSort(int *arr, int left, int right) {
	if (left >= right) {
		return;
	}

	int oldLeft = left;
	int oldRight = right;
	int pivot = arr[left];

	while (left != right) {
		while (arr[right] > pivot && left != right)
			right--;

		if (left != right) {
			arr[left] = arr[right];
			left++;
		}

		while (arr[left] < pivot&&left != right) {
			left++;
		}

		if (left != right) {
			arr[right] = arr[left];
			right--;
		}

	}

	arr[left] = pivot;

	quickSort(arr, oldLeft, left - 1);
	quickSort(arr, left + 1, oldRight);
}
