// Минимальное и максимальное значение в массиве + id
int min = arr[0], min_id = 0;
	for (int i = 1; i < num; i++) {
		if (min > arr[i]) {
			min = arr[i];
			min_id = i;
		}
	}
	int max = arr[0], max_id = 0;
	for (int i = 1; i < num; i++) {
		if (max < arr[i]) {
			max = arr[i];
			max_id = i;
		}
	}
