/*
In this code, user inputs no of seats hes wishes to check and then the seat numbers
the code prints out whether the seat entered is Window Seat WS, Aisle seat AS, or Middle seat MS
The code here is more logic number pattern based and does not use an array template of seating arrangement
this makes it very convenient for unreal cases where a seat number can be greater than 108
*/
#include <iostream>
#include <string>

using namespace std;

std::string checkseat(int seat);

int main() {

	int no_of_cases,i,opp_add=0;
	cin >> no_of_cases;
	int seat_num[no_of_cases];
	for(i=0;i<no_of_cases;i++){
		cin >> seat_num[i];
	}
	//inputs taken
	string outputs[no_of_cases];
	for(i=0;i<no_of_cases;i++){
		outputs[i] = checkseat(seat_num[i]);
		cout << seat_num[i] << " " << outputs[i] << endl;
	}
	//outputs are available now

	return 0;
}

std::string checkseat(int seat){
	if((seat+1)%3==0){
		return "MS";
	}
	else if((seat/3)%2==0 || seat==1 || (((seat-1)/3)%2)==0){
		return "WS";
	}
	else{
		return "AS";
	}
}
