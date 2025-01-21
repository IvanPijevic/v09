#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& vec, int vectorSize)
	{
		for (int i = 0; i < vectorSize; ++i)
		{
			vec.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& vec, int index) 
	{
		vec.erase(vec.begin() + index);
	}

	void input_element(std::vector<std::string>& vec, int index, const std::string& str) 
	{
		vec.insert(vec.begin() + index, str);
	}

	int list_nth_element(std::list<int>& lst, int index) 
	{
		std::list<int>::iterator iter = lst.begin();
		std::advance(iter, index);
		return *iter;
	}

	void list_sort_desc(std::list<int>& lst)
	{
		lst.sort(std::greater<int>());
	}

	uint32_t unique_numbers(std::istream& is) 
	{
		std::set<int> numbers;
		int num = 0;

		while (is >> num) 
		{
			numbers.insert(num);
		}

		return numbers.size();
	}

	word_frequency::word_frequency(std::istream& is) 
	{
		std::string word;
		while (is >> word)
		{
			for (char& letter : word) 
			{
				letter = tolower(letter);
			}
			m_map[word]++;
		}
	}

	uint32_t word_frequency::count() const
	{
		return m_map.size();
	}

	uint32_t word_frequency::frequency(const std::string& str) const
	{
		return m_map.find(str) != m_map.end() ? m_map.at(str) : 0;
	}
}