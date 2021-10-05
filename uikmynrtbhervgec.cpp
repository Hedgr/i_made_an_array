#include <iostream>

using namespace std;


int array_test_2(int x) {
	int x_2 = x;
	for (size_t x = 0; x < x_2; x++)
	{
		cout << "e ";
	}

	return 0;
}

int h_array(int x, int y) {
	int y_2 = y;
	for (size_t y = 0; y < y_2; y++)
	{
		array_test_2(x);
		cout << "\n";
	}
	return 0;
}

int h_array_u() {
	int rows = 10;
	int columns = 6;
	h_array(rows, columns);
}


int main()
{
	string version = "1.4.2";
	cout << "ver. " << version << "\n";
	h_array_u();
	

	return 0;
}
