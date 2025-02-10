#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class bell_sort
{
public:
	vector<int> array;

	vector<int> sorting(vector<int>& a_)
	{
		int temp_num;
		vector<int>::iterator maximum_small_iterator = a_.begin();
		vector<int>::iterator maximum_big_iterator = a_.begin();
		vector<int>::iterator iterator_on_border = a_.end() - 1;
		vector<int>::iterator temp_iterator;
		int counter = 0;
		if (a_.size() % 2)
		{	
			for (int j = 0; j < a_.size(); j++)
			{
				if (a_[j] > *maximum_big_iterator)
				{
					maximum_big_iterator = a_.begin() + j;
				}
			}

			temp_num = *(a_.end()-1);
			*(a_.end()-1) = *maximum_big_iterator;
			*maximum_big_iterator = temp_num;
			iterator_on_border = a_.end() - 2;


			for (int i = 0; i < (a_.size())/2; i++)
			{
				maximum_big_iterator = a_.begin()+1;
				maximum_small_iterator = a_.begin();

				//Поиск максимумов
				for (int j = 0; j < (a_.size()+1)/2; j++)
				{
					
					if (a_[j] > *maximum_small_iterator)
					{
						if (a_[j] > *maximum_big_iterator)
						{	
							maximum_small_iterator = maximum_big_iterator;
							maximum_big_iterator = a_.begin() + j;
						}
						else
						{
							maximum_small_iterator = a_.begin() + j;
						}
					}
				}
				//Вставка в нужные места
				temp_num = *maximum_small_iterator;
				a_.erase(maximum_small_iterator);
				a_.push_back(temp_num);

				temp_num = *maximum_big_iterator;
				*maximum_big_iterator = *iterator_on_border;
				*iterator_on_border = temp_num;
			}
		}
		else
		{
			;
		}
		return a_;
	}
};


int main()
{
	vector<int> a = { 0, 3, 1 };
	bell_sort b;
	b.sorting(a);
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " " << endl;
	return 0;
}