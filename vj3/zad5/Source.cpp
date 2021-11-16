#include <iostream>

using namespace std;

int count(string& sentence, string& word, int N)
{
	int i, br;
	size_t found = sentence.find(word);

	for (i = 1; (br = sentence.find(word)) != -1; ++i)
	{
		sentence = sentence.substr(++br);
	}
	cout << "Word is found " << i-1 << " times" << endl;
	return 0;
}

int main()
{
	string sentence = "Nestopiseaovdjeseponavljapise";
	string word = "pise";

	int N = sentence.length();
	count(sentence, word, N);
}