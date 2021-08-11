/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:08:19 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/11 16:03:29 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	std::time_t result = std::time(nullptr);
	struct tm * timeinfo;
	char buffer [80];
	time (&result);
	timeinfo = localtime (&result);
	std::strftime(buffer, 80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "["<< buffer << "] ";

	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;	
	std::cout << std::endl;
}

Account::Account( int initial_deposit )
{
		std::time_t result = std::time(nullptr);
		struct tm * timeinfo;
		char buffer [80];
		_accountIndex = _nbAccounts;
		_nbAccounts++;
		_nbWithdrawals = 0;
		_nbDeposits = 0;

		time (&result);
		timeinfo = localtime (&result);
		std::strftime(buffer, 80,"%Y%m%d_%H%M%S",timeinfo);
		std::cout << "["<< buffer << "] ";
		_amount = initial_deposit;
		
		_totalAmount += _amount;
		std::cout << "index:" << _accountIndex << ";amount:" << _amount;
		std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	std::time_t result = std::time(nullptr);
	struct tm * timeinfo;
	char buffer [80];
	time (&result);
	timeinfo = localtime (&result);
	std::strftime(buffer, 80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "["<< buffer << "] ";
	std::cout << "index:" <<_accountIndex << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits = 0;
	_totalNbDeposits++;
	std::time_t result = std::time(nullptr);
	struct tm * timeinfo;
	char buffer [80];

	time (&result);
	timeinfo = localtime (&result);
	std::strftime(buffer, 80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "["<< buffer << "] ";

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount = _amount + deposit;
	_totalAmount += _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount;
	std::cout << ";nb_deposits" << ++_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_nbWithdrawals = 0;
	std::time_t result = std::time(nullptr);
	struct tm * timeinfo;
	char buffer [80];
	time (&result);
	timeinfo = localtime (&result);
	std::strftime(buffer, 80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "["<< buffer << "] ";

	
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (_amount - withdrawal < 0)
	{
		_totalAmount += _amount;
		std::cout<< ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		_amount = _amount - withdrawal;
		_totalAmount += _amount;
		std::cout<< ";withdrawal:" << withdrawal;
		std::cout<< ";amount:" << _amount;
		std::cout << ";nb_withdrawal:" << ++_nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
		return(1);
	}
}

int		Account::checkAmount( void ) const
{
	return(1);
}

void	Account::displayStatus( void ) const
{
	std::time_t result = std::time(nullptr);
	struct tm * timeinfo;
	char buffer [80];
	time (&result);
	timeinfo = localtime (&result);
	std::strftime(buffer, 80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "["<< buffer << "] ";

	
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;	
	std::cout<< std::endl;
	_totalAmount = 0;
}