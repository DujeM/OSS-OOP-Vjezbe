#include <string>
#include <iostream>
using namespace std;

int numOfSubstrings(string str, string sub)
{
	int occurrences = 0;
	string::size_type pos = 0;

	while ((pos = str.find(sub, pos)) != std::string::npos) {
		++occurrences;
		pos += sub.length();
	}

	return occurrences;
}

int main()
{
	string str = "testjedantestdvatesttritestcetri";
	string sub = "test";

	std::cout << "Substring occures " << numOfSubstrings(str, sub) << " times" << std::endl;

}