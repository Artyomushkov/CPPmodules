/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:18:58 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/14 19:30:57 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void) {
	
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout
		<< "["
		<< (now->tm_year + 1900)
        << std::setfill('0') << std::setw(2) << now->tm_mon
        << std::setfill('0') << std::setw(2) << (now->tm_mday + 1)
		<< "_"
        << std::setfill('0') << std::setw(2) << now->tm_hour
        << std::setfill('0') << std::setw(2) << now->tm_min
        << std::setfill('0') << std::setw(2) << now->tm_sec
        << "] ";
}

void	Account::displayAccountsInfos(void) {
	
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";"
		<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) {

	this->_accountIndex = Account::getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created" << std::endl;
}

Account::~Account(void) {
	
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {

	int	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {

	if (withdrawal > this->_amount) {
		Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "withdrawal:refused" << std::endl;
		return (false);
	}
	else {
		int	p_amount = this->_amount;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		Account::_displayTimestamp();
		std::cout
			<< "index:" << this->_accountIndex << ";"
			<< "p_amount:" << p_amount << ";"
			<< "withdrawal:" << withdrawal << ";"
			<< "amount:" << this->_amount << ";"
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {

	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}
