#include <iostream>
using namespace std;

void sort(int array[],int nums){
	int temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void sort(int array[],int nums,bool desc){
	int temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if(desc==false){
				if (array[i] > array[j]){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}else{
				if (array[i] < array[j]){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
			
		}
	}
}

void display_array(int array[], int nums){
	for(int i=0; i<nums; i++){
		cout << array[i] << "  ";
	}
	cout << endl;
}

void create_random_array(int array[],int nums){
	srandom(time(NULL));
	for(int i=0; i<nums; i++){
		array[i] = 	random() % 100 + 1;
	}
}