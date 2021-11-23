#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void input_strings(vector<string> &vectorOfStrings)
{
	string input;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter string:" << endl;
		cin >> input;
		vectorOfStrings.push_back(input);
	}

}

void print_vector(vector<string> &vectorOfStrings)
{
	cout << "Vector of strings:" << endl;

	for (auto i = vectorOfStrings.begin(); i != vectorOfStrings.end(); ++i)
		cout << *i << " ";

	cout << endl;
}

void reverse_strings(vector<string> &vectorOfStrings)
{
	string temp;
	for (auto i = vectorOfStrings.begin(); i != vectorOfStrings.end(); ++i)
	{
		temp = *i;
		reverse(temp.begin(), temp.end());
		*i = temp;
	}
	sort(vectorOfStrings.begin(), vectorOfStrings.end());
}

int main()
{
	vector<string> vectorOfStrings;

	input_strings(vectorOfStrings);
	print_vector(vectorOfStrings);
	reverse_strings(vectorOfStrings);
	print_vector(vectorOfStrings);
}