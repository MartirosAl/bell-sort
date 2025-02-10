#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class bell_sort
{
	vector<int> array;

	vector<int> sorting(vector<int>& a_)
	{
		int temp_num;
		int maximum_small = -9999999999999999999;
		vector<int>::iterator maximum_small_iterator = a_.begin();
		int maximum_big = -9999999999999999999;
		vector<int>::iterator maximum_big_iterator = a_.begin();
		vector<int>::iterator iterator_on_border = a_.end() - 1;
		vector<int>::iterator temp_iterator;
		int counter = 0;
		if (a_.size() % 2)
		{	
			for (int j = 0; j < a_.size(); j++)
			{
				if (a_[j] > maximum_big)
				{
					maximum_big = a_[j];
					maximum_big_iterator = a_.begin() + j;
				}
			}

			temp_num = *(a_.end()-1);
			*(a_.end()-1) = *maximum_big_iterator;
			*maximum_big_iterator = temp_num;


			for (int i = 0; i < (a_.size()+1)/2; i++)
			{
				maximum_small = -9999999999999999999;
				maximum_big = -9999999999999999999;
				for (int j = 0; j < a_.size(); j++)
				{
					if (a_[j])
				}
			}
		}
		else
		{

		}
	}
};


int main()
{
	vector<int> a = { 0, 1, 2, 3 };
	vector<int>::iterator it = a.end();
	cout << *it << endl;
	cout << *(it - 1) << endl;
	return 0;
}