//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//
//using namespace std;

//int main()
//{
//	ifstream file;
//	file.open("C:\\Users\\User\\source\\repos\\PR 9\\text.txt");
//
//
//	if (file.is_open())
//		cout << "All OK " << endl;
//	else {
//		cout << "Error! " << endl;
//		return -1;
//	}
//
//	string str;
//
//	for (file >> str; !file.eof(); file >> str)
//		cout << str << endl;
//
//	cout << str << endl;
//}

//int main()
//{
//	ifstream FILE("task.txt");
//	if (FILE.is_open())
//	{
//		cout << "File is open" << endl;
//	}
//	else
//	{
//		cout << "file is not open" << endl;
//		return -1;
//	}
//
//	string str;
//	string word;
//	int count = 0;
//
//	cout << "Enter word : " << endl;
//	cin >> word;
//
//	for (FILE >> str; !FILE.eof(); FILE >> str)
//	{
//		if (str == word)
//		{
//			count++;
//		}
//	}
//	cout << "Count : " << count << endl;
//
//	FILE.close();
//	return 0;
//}

//int main()
//{
//	ifstream FILE("task.txt");
//	if (FILE.is_open())
//	{
//		cout << "Open file" << endl;
//	}
//	else
//	{
//		cout << "File not open" << endl;
//		return -1;
//	}
//
//	string str;
//	char char1;
//	int count = 0;
//	cout << "Enter a symbol : " << endl;
//
//	cin >> char1;
//
//	for (FILE >> str; !FILE.eof(); FILE >> str)
//	{
//		if (str[0] == char1)
//		{
//			count++;
//		}
//	}
//	cout << "Word = " << char1 << "Sum = " << count << endl;
//	FILE.close();
//
//}

//int main()
//{
//	ifstream FILE("task.txt");
//	if (FILE.is_open())
//	{
//		cout << "File open" << endl;
//	}
//	else
//	{
//		cout << "File not is open" << endl;
//		return -1;
//	}
//
//	string str;
//	char char1;
//	int count = 0;
//
//	cout << "Enter a symb " << endl;
//	cin >> char1;
//
//	for (FILE >> str; !FILE.eof(); FILE >> str)
//	{
//		if (str[0] == char1)
//		{
//			count++;
//		}
//	}
//	cout << "Sum : " << count;
//	FILE.close();
//}

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;



//int main()
//{
//
//    ifstream file("task.txt");
//
//    if (file.is_open())
//    {
//        cout << "File is open" << endl;
//    }
//    else
//    {
//        cout << "File is not open" << endl;
//        return -1;
//    }
//
//    string str;
//
//    getline(file, str);
//    cout << "First line: " << str << endl;
//
//    while (getline(file, str))
//        cout << str << endl;
//
//    file.clear();
//    file.seekg(0);
//
//    char value;
//
//    while (file.get(value))
//        cout << value;
//
//    file.close();
//
//    return 0;
//}

//int main()
//{
//	ifstream file("task.txt");
//
//	if (file.is_open()) {
//		cout << "File open" << endl;
//	}
//	else
//	{
//		cout << "File not open" << endl;
//		return -1;
//	}
//	string str;
//	int count = 0;
//
//	while (getline(file, str))
//		count++;
//
//	cout << "Result = " << count;
//	file.close();
//
//}




//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
	//ifstream FILE;
	//FILE.open("text.txt");

	//if (!FILE.is_open()) {
	//	cout << "File is NOT open" << endl;
	//	return -1;
	//}

	//string str;
	//while (FILE >> str)
	//{
	//	cout << str << " ";
	//}
	//cout << endl;
	//FILE.close();
	
	//while (getline( FILE, str ));
	//{
	//	cout << str << endl;
	//}
	//cout << endl;

	//char value;
	//while (FILE.get(value))
	//{
	//	cout << value << ' ';
	//}
	//cout << endl;

	//FILE.close();


//	ofstream fileo("FILE.txt");
//
//	if (fileo.is_open())
//		cout << "File add" << endl;
//	else {
//		cout << "File no add" << endl;
//		return -1;
//	}
//
//	string str = "Hello world!!!";
//	double d = 123.456;
//
//	fileo << str << endl << d << endl;
//
//	fileo.close();
//
//}


//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str[] = { "Hello world", "Cat dog bird", "Red Black Yellow"};
//
//	ofstream FILE("FILE.txt");
//
//	if (!FILE.is_open()) {
//		cout << "File is NOT open" << endl;
//		return -1;
//	}
//
//	for (auto &s : str) {
//		FILE << s << endl;
//	}
//
//	FILE.close();
//
//}

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//	const int rows = 2, cols = 2;
//	int arr[rows][cols];
//	char choice;
//	cout << "Enter a symbol (g - generation, i - enter): ";
//	cin >> choice;
//
//	if (choice == 'g') {
//		for (int i = 0; i < rows; i++) {
//			for (int j = 0; j < cols; j++) {
//				arr[i][j] = rand() % 25;
//			}
//		}
//	}
//	else if (choice == 'i') {
//		for (int i = 0; i < rows; i++) {
//			for (int j = 0; j < cols; j++) {
//				cin >> arr[i][j];
//			}
//		}
//	}
//
//	ofstream FILE("FILE.txt");
//
//	if (!FILE.is_open()) {
//		cout << "File is NOT open" << endl;
//		return -1;
//	}
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			FILE << arr[i][j] << ' ';
//		}
//	}
//
//	FILE.close();
//
//}

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	ifstream file1("FILE.txt");
//	ofstream file2("FILE2.txt");
//
//	if (!file1.is_open()) {
//		cout << "File is NOT open" << endl;
//		return -1;
//	}
//
//	if (!file2.is_open()) {
//		cout << "File2 is NOT open" << endl;
//		return -1;
//	}
//
//	char symbol;
//
//	while (file1.get(symbol)) {
//		if (symbol == '0') {
//			symbol = '1';
//		}
//		else if (symbol == '1') {
//			symbol = '0';
//		}
//		file2 << symbol;
//	}
//
//	cout << "Copy Good!" << endl;
//
//	file1.close();
//	file2.close();
//
//	return 0;
//}

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//bool isPrime(int num) {
//	if (num <= 1) return false;
//	if (num == 2) return true;
//	if (num % 2 == 0) return false;
//
//	for (int i = 3; i * i <= num; i += 2) {
//		if (num % i == 0) return false;
//	}
//	return true;
//}
//
//
//int* valuePrime(int* arr, int size, int& newSize)
//{
//	newSize = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (!isPrime(arr[i])) {
//			newSize++;
//		}
//	}
//	int* newArr = new int[newSize];
//	int index = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (!isPrime(arr[i])) {
//			newArr[index++] = arr[i];
//		}
//	}
//	return newArr;
//}
//
//
//int main()
//{
//	int size = 6;
//	int* arr = new int[size] {3, 6, 5, 8, 9, 13};
//	
//	int newSize;
//	int* newArr = valuePrime(arr, size, newSize);
//
//	cout << "New array : " << endl;
//	for (int i = 0; i < newSize; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//	cout << endl;
//
//	delete[] arr;
//	delete newArr;
//}

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int** createArr(int rows, int cols)
//{
//	srand(time(NULL));
//
//	int** arr = new int*[rows];
//	for (int i = 0; i < rows; i++) {
//		arr[i] = new int[cols];
//	}
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			arr[i][j] = rand() % 20;
//		}
//	}
//	return arr;
//}
//void printArr(int** arr, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}
//
//void deleteArr(int** arr, int rows)
//{
//	for (int i = 0; i < rows; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//} 
//
//int main()
//{
//	int rows, cols;
//	cout << "Enter a rows and cols : " << endl;
//	cin >> rows;
//	cin >> cols;
//
//	int** arr = createArr(rows, cols);
//
//	printArr(arr, rows, cols);
//
//	deleteArr(arr, rows);
//
//	return 0;
//	
//}

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <algorithm>
//#include <iterator>
//#include <locale>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	ifstream inputFile("input.txt");
//
//	if (!inputFile.is_open()) {
//		cout << "No open file" << endl;
//		return 1;
//	}
//	ofstream outputFile("output.txt");
//
//	if (!outputFile.is_open()) {
//		cout << "No open file" << endl;
//		return 1;
//	}
//	string line;
//
//	while (getline(inputFile, line)) {
//		outputFile << line << endl;
//	}
//
//	inputFile.close();
//	outputFile.close();
//
//}

//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//
//	ifstream inputFile("input.txt");
//
//	if (!inputFile.is_open()) {
//		cout << "File No open" << endl;
//		return 1;
//
//	}
//
//	int number;
//	int sum = 0;
//
//	while (inputFile >> number) {
//		sum += number;
//	}
//
//	inputFile.close();
//
//	ofstream outputFile("output.txt");
//
//	if (!outputFile.is_open()) {
//		cout << "File No open" << endl;
//		return 1;
//	}
//	outputFile << "Sum numbers : " << sum << endl;
//
//	outputFile.close();
//}


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	string path = "myFile.txt";
	//cin >> path;
	ofstream fout;
	fout.open(path);

	if (!fout.is_open()) {
		cout << "Error !!! " << endl;
	}

	else
	{
		fout << "Our data base";
	}

	fout.close();


	return 0;
}