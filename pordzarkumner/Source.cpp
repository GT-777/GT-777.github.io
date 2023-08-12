//#include <iostream> 
//#include <string>
//double reciverfunction(double far, double cel) {
//	double sum = far = (cel * 9 / 5) + 32;
//	
//}
//void Celsius() {
//	double celsius = 0;
//	std::cout << " Ener celsius degree" << std::endl;
//	std::cin >> celsius;
//	double   fahrenheit = 0;
//	double foo = reciverfunction(fahrenheit, celsius);
//	std::cout << "fahrenheit =  " << foo << std::endl;
//}
//int main() {
//	Celsius();
//	return 0;
//}
////std::string evenoddin(int num) {
////	if (num % 2 == 0) {
////		std::string even = "even";
////		return even;
////	}
////	else if (num % 2 != 0) {
////		std::string odd = "odd";
////		return odd;
////	}
////
////}
////void evenodd() {
////	int number = 0;
////	std::cout << "Enter number  " << std::endl;
////	std::cin >> number;
////	std::string function = evenoddin(number);
////	std::cout << function << std::endl;
////}
////
////int main() {
////	evenodd();
////	return 0;
////}
//////tvanshanneri gumar
////#include <iostream>
////
////int main() {
////    int number, sum = 0;
////
////    // Prompt the user to enter a positive integer
////    std::cout << "Enter a positive integer: ";
////    std::cin >> number;
////
////    // Calculate the sum of the digits
////    int tempNumber = number;
////    while (tempNumber != 0) {
////        int digit = tempNumber % 10;
////        sum += digit;
////        tempNumber /= 10;
////    }
////
////    // Display the sum of the digits
////    std::cout << "Sum of the digits of " << number << " is: " << sum << std::endl;
////
////    return 0;
////}
//////heto nayel
////int main() {
////	int number = 0;
////	std::cout << "Enter number" << std::endl;
////    std::cin >> number;
////	for () {
////		bool found = false;
////		if (number % 2 == 0) {
////			found = true;
////		}
////		else if(found == false) {
////			
////		}
////	}
////
////}
//void ArrayReceiver(int*&, int&);
//void ArrayGiver();
//void ArrayReceiver(int*& arr, int& size) {
//	std::cout << " Enter Arr Size " << " ";
//	std::cin >> size;
//	arr = new int [size] {};
//	for (int i = 0; i < size; i++) {
//		std::cin >> arr[i];
//	}
//}
//void ArrayGiver() {
//	int size = 0;
//	int* arr = nullptr;
//	ArrayReceiver(arr, size);
//	
//	if (arr == nullptr) {
//	
//		std::cout << "Error";
//	}
//	else {
//		std::cout << "Arr = ";
//		for (int i = 0; i < size; i++) {
//			std::cout << arr[i] << " ";
//		}
//	}
//	
//	delete[] arr;
//}
//int main() {
//	ArrayGiver();
//    return 0;
//}
//#include <crtdbg.h>
//#include <malloc.h>
//#include <iostream>
////
////#include <string>
////void StringReceiver(const char* text, int);
////void StringGiver();
////void StringReceiver(const char* text, int size) {
////	const char * result;
////	for (int i = 0; i < size; i++) {
////		if (text[i] != ' ') {
////			result += text[i];
////		}
////	}
////	text = result;
////}
////void StringGiver() {
////	int size = 21;
////	const char *text = "H E L L O  W O R L D";
////	StringReceiver(text, size);
////	std::cout << text;
////}
////int main() {
////	StringGiver();
////	return 0;
////}
////void ShortenArray(int*&, int&, int);
////void OrginalArray();
////void ShortenArray(int*& arr, int &size, int four) {
////	std::cout << "Enter arr size: ";
////	std::cin >> size;
////	arr = new int [size] {};
////	int count = 0;
////	int p = 0;
////	std::cout  << " write the multiple of the number you want to output? ";
////	std::cin >> p;
////	for (int i = 0; i < size; i++) {
////		std::cin >> arr[i];
////		
////		//if (arr[i] != four) {
////			if (arr[i] % p != 0) {
////			count++;
////		}
////
////	}
////	int* arr1 = new int [count] {};
////	int size1 = 0;
////	for (int j = 0; j < size; j++) {
////		//if (arr[j] != four) {
////			if (arr[j] % p != 0) {
////			arr1[size1] = arr[j];
////			size1++;
////		}
////	}
////	size = size1;
////	delete[] arr;
////	arr = arr1;
////}
////void OrginalArray() {
////	int size = 0;
////	int* x = nullptr;
////	int four = 4;
////	int newsize = 0;
////	ShortenArray(x, size, four);
////	std::cout << "Arr = ";
////	for (int i = 0; i < size; i++) {
////		std::cout << x[i] << " ";
////	}
////	delete[] x;
////}
////int main() {
////	OrginalArray();
////
////}
//void Receiver(int *&, int );
//void Giver();
//void Receiver(int *& arr, int size) {
//	std::cout << "Enter arr size: ";
//	std::cin >> size; 
//	arr = new int [size] {};
//	int* arr1 = new int{};
//	int* arr2 = new int{};
//	for (int i = 0; i < size; i++) {
//		std::cin >> arr[i]; 
//		if (arr[i] % 2 == 0) {
//			arr1[i] = arr[i];
//			std::cout << arr1[i];
//		}
//		else if (arr[i] % 2 != 0) {
//			arr2[i] = arr[i];
//			//std::cout << arr2[i];
//		}
//
//	}
//}
//void Giver() {
//	int size = 0;
//	int* x = nullptr;
//	Receiver(x,size);
//}
//int main() {
//	Giver();
//	return 0;
//}