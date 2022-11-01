#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int search(vector<int>& nums, int target)
	{
		int left = 0;
		int right = nums.size() - 1;
		while (left <= right)
		{
			int middle = left + (right - left) / 2;
			if (nums[middle] > target)
			{
				left = middle + 1;
			}
			else if (nums[middle] < target)
			{
				right = middle - 1;
			}
			else
				return middle;
		}
		return -1;
	}
};
/*当[left,right]即左右端点存在且有意义时，应注意跳出循环的条件是left<=right*/

class solution
{
public:
	int search2(vector<int>& nums, int target)
	{
		int left = 0;
		int right = nums.size();
		while (left < right)
		{
			int middle = left + (right - left) / 2;
			if (nums[middle] > target)
			{
				left = middle + 1;
			}
			else if (nums[middle] < target)
			{
				right = middle;
			}
			else
				return middle;
		}
		return -1;
	}
};
/*当[left,right)右端点无意义时，使用left<right作为循环跳出条件，并且right更新为middle*/

class Solution2 {
public:
	int searchInsert(vector<int>& nums, int target) {
		if (target < nums.front())
			return 0;
		else if (target > nums.back())
			return nums.size();
		else
		{
			int left = 0;
			int right = nums.size() - 1;
			int middle = 0;
			while (left <= right)
			{
				middle = left + (right - left) / 2;
				if (target < nums[middle])
					right = middle - 1;
				else if (target > nums[middle])
					left = middle + 1;
				else
					return middle;
			}
			return middle + 1;
		}
	}
};

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int leftborder = getLeftBorder(nums, target);
		int rightborder = getRightBorder(nums, target);
		if (leftborder == -2 || rightborder == -2)
			return { -1,-1 };
		else if ((rightborder - leftborder) > 1)
			return { leftborder + 1, rightborder - 1 };
		return { -1, -1 };
	}
	int getRightBorder(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size() - 1;
		int rightborder = -2;
		while (left <= right) {
			int middle = left + (right - left) / 2;
			if (nums[middle] <= target) {
				left = middle + 1;
				rightborder = left;
			}
			else if (nums[middle] > target)
				right = middle - 1;
		}
		return rightborder;
	}

	int getLeftBorder(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size() - 1;
		int leftborder = -2;
		while (left <= right) {
			int middle = left + (right - left) / 2;
			if (nums[middle] < target)
				left = middle + 1;
			else if (nums[middle] >= target) {
				right = middle - 1;
				leftborder = right;
			}
		}
		return leftborder;
	}
};

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size() - 1;
		int leftBorder = -2;
		int rightBorder = -2;
		while (left <= right) {
			int middle = left + (right - left) / 2;
			if(nums[middle] )
		}
	}
};