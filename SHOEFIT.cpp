#include <iostream>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	int arr[testCases][3];
	
	for(int i = 0; i < testCases; i++){
	    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	
	for(int i = 0; i < testCases; i++){
	    int sum = arr[i][0] + arr[i][1] + arr[i][2];
	    if(sum == 0 || sum == 3){
	        cout <<0<< endl;
	    }
	    else{
	        cout <<1<< endl;
	    }
	}
	return 0;
}
