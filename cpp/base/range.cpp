// I am bored, making a cpp source code to emulate range function of python
#include<iostream>

using namespace std;

template <typename T>

int range(int start=0, int end);
void printarray(T *arr);

int main(){
	// to check if the functions work or not
	int i,start,end;
	cin >> start >> end;
	int *arr;
	arr = range(start,end);
	printarray<int>(arr);

	return 0;



	
	
}

int range(int start=0, int end){
	int *arr = new int[end-start+1];
	int i,value;
	for(i=0,value=start;value<end;i++,value++){
		*(arr+i) = value;
	}
	*(arr+end-start)=NULL
	return arr;
}

void printarray(T *arr){
	int i
	for(i=0;;i++){
		if(*(arr+i)!=NULL){
			print(*(arr+i));

		}
		else{
			break;
		}
	}
}