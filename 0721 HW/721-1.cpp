#include <iostream>
#include <cstdlib>

using namespace std;

#define ROW 2
#define COL 4

double average(int [ROW][COL]); 

int main(){
	
	int score[ROW][COL] = {{56, 69, 24, 67},
						   {89, 54, 73, 95}};
						   
	cout << average(score) << endl; 
	
    system("pause");
    return 0;
}

double average(int arr[ROW][COL]){
	double sum = 0;
	for (size_t i = 0; i < ROW; i++){
		
		for (size_t j = 0; j < COL; j++){
			sum += arr[i][j];	
		}

	}
	return sum / (ROW * COL);
} 
