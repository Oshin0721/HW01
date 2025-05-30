#include <iostream>

using namespace std;

int printArray(int arr[], int size) {
	cout << "배열의 원소들: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

int printArray2(int arr[], int size) {
	cout << "\n배열의 원소들 합계 와 평균: ";
	int tot = 0;
	for (int i = 0; i < size; i++) {
		tot += arr[i];
	}
	cout << tot << " " << (double)tot/size <<endl;
	
	return 0;
}

void insertionSort(int arr[], int size, bool ascending) {
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && ((ascending && arr[j] > key) || (!ascending && arr[j] < key))) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main() {
	int arr[5];
		
	cout << "5개의 정수를 입력하세요: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 정수: ";
		cin >> arr[i];
		}
		
	double total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	double average = total / 5;

	cout << "합계 : " << total << endl;
	cout << "평균 : " << average << endl;
		
	int choice;
	cout << "정렬 방법을 선택하세요 (1: 오름차순, 2: 내림차순): ";
	cin >> choice;

	if (choice == 1) {
		insertionSort(arr, 5, true);
		cout << "오름차순 삽입 정렬 완료." << endl;
	} else if (choice == 2) {
		insertionSort(arr, 5, false);
		cout << "내림차순 삽입 정렬 완료." << endl;
	} else {
		cout << "잘못된 선택입니다. 정렬하지 않습니다." << endl;
	}

	printArray(arr, 5);
	printArray2(arr, 5);
		
	return 0;
}
//최종 완료
