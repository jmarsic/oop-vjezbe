#include <iostream>
#include <vector>
#include <algorithm> //da mozemo koristiti sort
#include <string> //za getline

using namespace std;

void stringReverse(vector<string>& vec, string& input)
{
	string temp;
	cout << "Enter string: ";
	input = "1950";

	while (input != ".") //unosi dok ne uneses tocku
	{
		getline(cin, input);
		temp = input;
		reverse(temp.begin(), temp.end());
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
}

void printVector(vector<string> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i];
	}
}

int main()
{
	vector<string> vec;
	string input;

	stringReverse(vec, input);
	printVector(vec);

	return 0;
}