#include <iostream>
#include <vector>
#include <algorithm> //da mozemo koristiti sort

using namespace std;

int main()
{
	int temp = 0, i;
	vector<int> vec{ 1, 3, 7, 5, 0, 2 };

	sort(vec.begin(), vec.end());

	for (i = 0; i < vec.size(); i++)
	{
		temp += vec[i];
	}

	vec.insert(vec.begin(), 0);
	vec.insert(vec.end(), temp);

	for (i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}

	return 0;
}
