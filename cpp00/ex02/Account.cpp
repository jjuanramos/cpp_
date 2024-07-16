/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:41:38 by juramos           #+#    #+#             */
/*   Updated: 2024/07/16 11:36:49 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created"
		<< std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed"
		<< std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount()
		<< ";deposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals()
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = this->_amount;

	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->checkAmount()
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = this->_amount;

	if (this->checkAmount() < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << this->checkAmount()
		<< ";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;
	return (true);
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);	
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->checkAmount()
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:"  << this->_nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	t = std::time(NULL);
	std::tm*	now = std::localtime(&t);

	std::cout
		<< "["
		<< (now->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << (now->tm_mday)
		<< "_"
		<< std::setw(2) << std::setfill('0') << (now->tm_hour)
		<< std::setw(2) << std::setfill('0') << (now->tm_min)
		<< std::setw(2) << std::setfill('0') << (now->tm_sec)
		<< "] ";
}
