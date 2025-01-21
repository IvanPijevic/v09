#pragma once
#include <vector>
#include <string>
#include <list>
#include <map>
#include <set>
#include <sstream>

namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& vec, int vectorSize);
	void remove_element(std::vector<int>& vec, int index);
	void input_element(std::vector<std::string>& vec, int index, const std::string& str);

	int list_nth_element(std::list<int>& lst, int index);

	void list_sort_desc(std::list<int>& lst);

	uint32_t unique_numbers(std::istream& is);

	class word_frequency
	{
	public:
		word_frequency(std::istream& is);
		uint32_t count() const;
		uint32_t frequency(const std::string& str) const;

	private:
		std::map<std::string, int> m_map;
	};

}