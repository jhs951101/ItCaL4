#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double initial_balance, annual_interest_rate, balance;

	cout << "Initial balance? ";
	cin >> initial_balance;
	cout << "Annual interest rate in percent? ";
	cin >> annual_interest_rate;

	cout << "+-----+--------------------+\n";
	cout << "l" << setw(5) << "year" << "l" << setw(20) << "balance" << "l\n";
	cout << "+-----+--------------------+\n";
	balance = initial_balance;
	cout << fixed << setprecision(2);
	cout << "l" << setw(5) << "0" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "1" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "2" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "3" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "4" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "5" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "6" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "7" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "8" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "9" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "10" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "11" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "12" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "13" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "14" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "15" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "16" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "17" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "18" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "19" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;
	cout << "l" << setw(5) << "20" << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";
	balance = balance + balance * annual_interest_rate / 100.0;

	return 0;

}