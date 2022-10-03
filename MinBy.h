#ifndef MIN_BY_H
#define MIN_BY_H

#include<vector>
#include<string>
#include<cstddef>

typedef std::vector<std::string> VecStr;

std::string minBy(const VecStr& vec, bool(*lessThan)(const std::string&, const std::string&)) {
	std::string minString = vec[0];
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::string s = vec[i];
		if (lessThan(s, minString)) {
			minString = s;
		}
	}
	return minString;
}

#endif // !MIN_BY_H
