#include <iostream>
using namespace std;

int main() {
	int a, i=0;
	int m = 0;
	cout << "Enter Number : " << endl;
	cin >> a;
	cout << "Adad maqos : ";

    for (m = a % 10 ; a > 10 ; a /= 10){
        i = a % 10;
        m = (m * 10) + i - 1;
        
        
    }
	
    cout << m;
	
	cin.get();
	return 0;
}
