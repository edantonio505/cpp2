#include <iostream>
#include <vector>
#include <unordered_map>
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

vector<int> twoSum(vector<int> &number, int target)
{
	unordered_map<int, int> hash;
	vector<int> result;

	for (int i = 0; i < numbers.size(); i++)
	{
		int numberToFind = target - numbers[i];
		if(hash.find(numberToFind != hash.end()))
		{
			result.push_back(hash[numberToFind]);
			result.push_back(i);
			return result;
		}
		hash[numbers[i]] = i;
	}
	return result;
}