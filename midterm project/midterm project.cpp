/*The topic of the project is sparse matrix. 
It allows you to input a matrix, and it will print out this matrix.
Then declares the number of 0, finally judges whether it is a sparse matrix.
Created by Li Jiaheng, Mushroom.
*/
#include <iostream>
#include <vector>
using namespace std;

void MatrixPrinted(vector<vector<int>>matrix)
{
	int i, j, zero = 0;
	cout << "The matrix is: " << '\n';
	for (i = 0; i < matrix.size(); i++) {
		for (j = 0; j < matrix[0].size(); j++) {
			cout << matrix[i][j] << " ";
			if (matrix[i][j] == 0)
				zero++;
		}
		cout << endl;
	}
	cout << "The number of zeros in the matrix are " << zero << endl;
	if (zero > ((matrix.size() * matrix[0].size()) / 2))
		cout << "The matrix is a sparse matrix." << endl;
	else
		cout << "The matrix is not a sparse matrix." << endl;
}
int main()
{
	vector<vector<int>>matrix;
	vector<int>matrix_row;
	int row;
	int column;
	cout << "[Test] Input A Sparse Matrix" << endl;
	cout << "Please input the number of the row of the matrix£º";
	cin >> row;
	cout << "Please input the number of the column of the matrix£º";
	cin >> column;
	int input_num;
	for (int i = 0; i < row; i++)
	{
		cout << "Please input the elements in row " << i + 1 << ", each element is seperated by a space:";
		for (int j = 0; j < column; j++)
		{
			cin >> input_num;
			matrix_row.push_back(input_num);
		}
		matrix.push_back(matrix_row);
		matrix_row.clear();
	}

	MatrixPrinted(matrix);
	system("pause");
	return 0;
}