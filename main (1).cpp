#include <iostream>
// task start

using namespace std;

void array20();
void input_arr(int arr[], int& n, const int N);
void sumarr(int arr[], int& n, const int N);

/*Given an array of size N and integers K and L (1 ≤ K ≤ L ≤ N). Find the sum of the elements
array with numbers from K to L inclusive.*/

void array98();
void detect(int arr[], int& n);

/*Given an integer array of size N. Remove from the array all elements that
occur less than three times, and output the size of the resulting array and its
contents.*/

int main()
{
	int menu = 0; // input the task number

	while (menu != 3) {
		cout << "      *** Menu ***     " << endl;
		cout << " Task number: " 
			"\n1. Array#20"
			"\n2. Array#98"
			"\n3. Exit" << endl;

		cin >> menu;

		switch (menu)
		{// moving between tasks
			case 1:
			{
				array20();
				break;
			}
			case 2:
			{				
				array98();
				break;
			}
			case 3:
			{
				cout << "Program has ended";
				break;
			}
			default:
			{
				cout << " Wrong task! (Only 1-2)" << endl;
				break;
			}
			// error notification
		}
	}
}

//task 1
void array20() {
	const int N = 50;		// declaration of the constable integer
	int n = 0;				// declaration of the variable
	int arr[N];				// declaration of the array of variables
	//input function call
	input_arr(arr, n, N);
	//solve function call
	sumarr(arr, n, N);
}

void sumarr(int arr[], int& n, const int N) {
	int K, L;
	int sum = 0;
	cout << "Enter K and L: ";
	cin >> K >> L;
	
	if (1 <= K <= L <= N) {
		for (K = K -1; K < L;K++) {
			sum += arr[K];
		}
		cout << "Sum of the elements is " << sum << endl;
	}
	else {
		cout << "K or L were incorrectly entered" << endl;
	}
}

void input_arr(int arr[], int& n, const int N)
{
	cout << "Amount of elements: ";
	cin >> n;
	if (n < N && n > 0) {
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
	}
	else {  
		cout << "N entered wrong";
		// error notification
	}
}


//task 2
void array98() {
	const int N = 50;			// declaration of the constable integer
	int n = 0;					// declaration of the variable
	int arr[N];					// declaration of the array of variables
	//input function call
	input_arr(arr, n, N);
	//solve function call
	detect(arr, n);
}

void detect(int arr[], int& n ) {
	int count = 0, size = 0, temp = 0, countf = 0;
	const int F = 50;
	int ar[F];
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (temp != arr[i]) {
				temp = arr[i];
				count = 0;
			}
			if (arr[i] == arr[j]) {
				count++;
				cout <<"Counter = "<< count << " from " << arr[i] << " and " << arr[j] << endl;
			}
		}
		if (count >= 3) {
			size = count;
			for (int k = 0; k < size; k++) {
				ar[k] = arr[i];
			}
		}
	}
	cout << "Finale array " << endl;

	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n\n\n";
}

