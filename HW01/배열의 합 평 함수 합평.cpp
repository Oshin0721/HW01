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

int main() {
	int arr[5];

		cout << "첫번째 정수를 입력하세요" << endl;
		cin >> arr[0];
		
		cout << "두번째 정수를 입력하세요" << endl;
		cin >> arr[1];
	
		cout << "세번째 정수를 입력하세요" << endl;
		cin >> arr[2];
	
		cout << "네번째 정수를 입력하세요" << endl;
		cin >> arr[3];
	
		cout << "다섯번째 정수를 입력하세요" << endl;
		cin >> arr[4];
	
		double total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
		double average = total / 5;

		cout << "합계 : " << total << endl;
		cout << "평균 : " << average << endl;
		printArray(arr, 5);
		printArray2(arr, 5);
		
	return 0;
}
