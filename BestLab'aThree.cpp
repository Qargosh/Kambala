#include <iostream>
using namespace std;

int main()
{
	int M[3][3];
	cout << "Input matrix:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> M[i][0] >> M[i][1] >> M[i][2];
	}
	cout << "M:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << M[i][0] << " " << M[i][1] << " " << M[i][2] << endl;
	}

	int r = M[0][0] * M[1][1] * M[2][2] + M[0][1] * M[1][2] * M[2][0] + M[0][2] * M[1][0] * M[2][1]	- M[0][2] * M[1][1] * M[2][0] - M[0][0] * M[1][2] * M[2][1]	- M[0][1] * M[1][0] * M[2][2];
	cout << "Determinator: " << r;
	return 0;
}