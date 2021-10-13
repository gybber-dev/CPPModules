#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp() {
	std::time_t t = std::time(nullptr);   // get time now
	std::tm* now = std::localtime(&t);
	std::cout << '['
			<< std::setw(2) << std::setfill('0') << now->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << now->tm_mon + 1
			<< std::setw(2) << std::setfill('0') << now->tm_mday << '_'
			<< std::setw(2) << std::setfill('0') << now->tm_hour
			<< std::setw(2) << std::setfill('0') << now->tm_min
			<< std::setw(2) << std::setfill('0') << now->tm_sec << ']';
}

Account::Account(int initial_deposit) {
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";created" << std::endl;
}

Account::Account() {
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += 0;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";created" << std::endl;
}

int Account::getNbAccounts() {
	return Account::_nbAccounts;
}
int Account::getTotalAmount() {
	return Account::_totalAmount;
}
int Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << p_amount
			  << ";deposit:" << deposit
			  << ";amount:" << this->_amount
			  << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount) {
		std::cout << ";withdrawals:refused" << std::endl;
		return false;
	}
	else {
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << ";withdrawals:" << withdrawal
			  << ";amount:" << this->_amount
			  << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return true;
}

Account::~Account() {
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";closed" << std::endl;
}

int Account::checkAmount() const {
	return this->_amount;
}