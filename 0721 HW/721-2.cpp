#include <iostream>
#include <cstdlib>

using namespace std;

#define ROW 2
#define COL 4

void add(int a[ROW][COL], int b[ROW][COL], int c[ROW][COL]);

int main(){
	
	int a[ROW][COL] = {{1, 2, 3, 4},
			 		   {5, 6, 7, 8}};

	int b[ROW][COL] = {{9, 10, 11, 12},
					   {13, 14, 15, 16}};
			 
	int c[ROW][COL];
	
	add(a, b, c);
	
	for (size_t i = 0; i < ROW; i++){
		
		for (size_t j = 0; j < COL; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	
    system("pause");
    return 0;
}

void add(int a[ROW][COL], int b[ROW][COL], int c[ROW][COL]){
	for (size_t i = 0; i < ROW; i++){
		
		for (size_t j = 0; j < COL; j++){
			c[i][j] = (a[i][j] + b[i][j]);
		}
	}
	return;
}

