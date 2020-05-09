#include <iostream>
#include <string>

using namespace std;

std::string checkseat(int seat);
int find_opp(int seat);

std::string check[12] = {"WS","MS","AS","AS","MS","WS","WS","MS","AS","AS","MS","WS"};
//global variable

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
		seat_num[i] = find_opp(seat_num[i]);
		cout << seat_num[i] << " " << outputs[i] << endl;
	}
	//outputs are available now

	return 0;
}

std::string checkseat(int seat){
	int rem;
	rem = seat%12;
	if (rem!=0){
	return check[rem-1];}
	else{
	return "WS";}
	}

int find_opp(int seat){
	int rem;
	rem = seat%12;
	//return (seat-rem-rem+1+12);
	if (rem==0)
	return seat-11;
	else
	return seat-rem-rem+12+1;

}
