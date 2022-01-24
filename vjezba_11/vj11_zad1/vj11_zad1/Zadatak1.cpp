/*
	1. baci iznimku ako ne postoji datoteka,
	2. napuni vektor brojevima iz datoteke,
	3. prebroji sve brojeve vece od 500,
	4. nađi minimalni i maximalni element,
	5. iz vektora izbaci brojeve manje od 300,
	6. preostale brojeve sortiraj silazno.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
#define FILE_NAME "numbers.txt"

vector<int> fillVectorWithFileContent() {
	ifstream f;
	f.open(FILE_NAME);

	istream_iterator<int> it(f);
	istream_iterator<int> eos;
	vector<int> v;

	copy(it, eos, back_inserter(v));	return v;
}

int countHigherNumbers(vector<int> arr, int num) {
	int counter = 0;

	for (auto i = arr.begin(); i != arr.end(); ++i) 
		if (*i > num)
			counter++;


	return counter;
}

int getMaxElement(vector<int> arr) {
	return *max_element(arr.begin(), arr.end());
}

int getMinElement(vector<int> arr) {
	return *min_element(arr.begin(), arr.end());
}

vector<int> removeNumbersLessThan(vector<int> arr, int num) {
	arr.erase(remove_if(
		arr.begin(), arr.end(),
		[&](const int& x) {
		return x < num;
	}), arr.end());

	return arr;
}

vector<int> sortDesc(vector<int> arr) {
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	return arr;
}

void printVector(vector<int> arr) {
	for (auto i = arr.begin(); i != arr.end(); ++i)
		cout << *i << " ";
}

void openAndHandleFile() {
	ifstream file;
	vector<int> arrOfFileContent;
	
	file.open(FILE_NAME);

	if (!file)
	{
		cout << "exception" << endl;
		return;
	}

	arrOfFileContent = fillVectorWithFileContent();

	cout << "Numbers higher than 500: " << countHigherNumbers(arrOfFileContent, 500) << endl;
	cout << "Min element in file: " << getMinElement(arrOfFileContent) << endl;
	cout << "Max element in file: " << getMaxElement(arrOfFileContent) << endl;
	
	arrOfFileContent = removeNumbersLessThan(arrOfFileContent, 300);

	cout << "Vector without numbers less than 300: " << endl;
	printVector(arrOfFileContent);

	cout << "Desc sorted vector: " << endl;
	printVector(sortDesc(arrOfFileContent));
}

int main() {

	openAndHandleFile();

	return 0;
}

