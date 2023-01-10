class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int targetrow = 0, targetcol = matrix[0].size() - 1;
	while (targetrow < matrix.size() && targetcol >= 0) {
		if (matrix[targetrow][targetcol] > target) {
			targetcol--;
		} else if (matrix[targetrow][targetcol] < target) {
			targetrow++;
		} else {
			return true;
		}
	}
	return false;
}
};
