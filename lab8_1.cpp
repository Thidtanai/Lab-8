#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double Loan, IRP, Can; 

int main(){	
	cout << "Enter initial loan: ";
  cin >> Loan;
	cout << "Enter interest rate per year (%): ";
  cin >> IRP;
	cout << "Enter amount you can pay per year: ";
  cin >> Can;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
  double Prev = Loan;
  double Interest;
  double total;
  double Pay = Can;
  double New = Loan;
  for(int count = 1;count > 0;count++){
    cout << fixed << setprecision(2); 
	  cout << setw(13) << left << count; 
	  cout << setw(13) << left << Prev;
    Interest = Prev*(IRP/100);
  	cout << setw(13) << left << Interest;
    total = Prev + Interest;
  	cout << setw(13) << left << total;
    if(Pay > total)Pay = total;
	  cout << setw(13) << left << Pay;
    New = total - Pay;
	  cout << setw(13) << left << New;
    Prev = New;
    if(Prev <= 0)break;
	  cout << "\n";	
  }
	return 0;
}

//Prev = Loan; 
//Interest = Prev*(IRP/100);
//total = Prev + Interest;
//Pay = Can;
//New = total - Pay;