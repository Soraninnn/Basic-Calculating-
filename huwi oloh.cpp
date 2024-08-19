#include <iostream>
#include <cstdlib>
using namespace std;

void huwiOloh() {
    double obtMark, totMark, result;
    cout << "Tugruguu oruulna uu: ";
    cin >> totMark;
    cout << "2 dahi tugrug: ";
    cin >> obtMark;
	result = (obtMark / totMark) * 100;
    cout << totMark << " tugrugnii " << obtMark << " tugrug ni " << result << "%" << endl;	
}
void tugrugOloh() {
    double percentage, totalValue, result;
    cout << "Huwia oruulna uu: ";
    cin >> percentage;
    cout << "Munguu oruulna uu: ";
    cin >> totalValue;
    result = (percentage * totalValue) / 100;
    if(percentage <= 100)
    {
    	cout << percentage << "% ni " << result << " tugrug." << endl;
	}
	else
	{
		system("Color 04");
		cout << "Error! Zuwhun 100 hurtel huwi oruulna uu!";
	}
}
void offSale(){
	double price, percentage, result;
	cout << "Hymdraagui uniig oruulna uu: ";
	cin >> price;
	cout << "Sale zarlasan huwia oruulna uu: ";
	cin >> percentage;
	result = price - ((price * percentage) / 100);
   	cout << price << "-aas " << percentage << "% hymdraad " << result << " tugrug bolloo!";
	if(percentage > 100)
	{
		system("Color 04");
        cout << "Error! Zuwhun 100 hurtel huwi oruulna uu!" << endl;
    }
	else if (percentage = 100)
	{
	    system("cls");
	    system("Color 02");
		cout << "This item is free :0" << endl;
	}
}

int main() 
{
	int choice = 3;
	cout << "Doorhoos songoltoo hiine uu: " << endl;
	cout << "1. Buhel toonoos huwi oloh\n" << "2. Huwias buhel toog tootsooloh\n" << "3. Hymdral tootsooloh" <<endl;
	cin >> choice;
	switch(choice)
	{
	case 1:
		huwiOloh();
		break;
	case 2:
		tugrugOloh();
		break;
    case 3:
        offSale();
        break;
    default:
    	system("cls");
    	system("Color 04");
    	cout << "invalid number!";
	return 0;
}
}

