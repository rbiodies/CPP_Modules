//
// Created by Regulus Biodiesel on 3/5/22.
//

#include "Account.hpp"
#include <iostream> // std::
#include <iomanip>  // setfill

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) {
    return (_nbAccounts);
}

int Account::getTotalAmount( void ) {
    return (_totalAmount);
}

int Account::getNbDeposits( void ) {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
    return (_totalNbWithdrawals);
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void    Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

//[19920104_091532] index:0;amount:42;created
Account::Account(int initial_deposit){
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "amount:" << _amount << ";";
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";
    if (_amount < withdrawal) {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";";
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "amount:" << _amount << ";";
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount() const {
    return (_amount);
}

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void    Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

// format: [19920104_091532]
// [year/month/day_hour/min/sec]
void    Account::_displayTimestamp() {
    time_t    now = time(0);
    tm        *ltm = localtime(&now);

    std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;  // month starts at 0;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
    std::cout << "]";
}
// setw(int number)
//where number is the number of characters to be set as the field width.