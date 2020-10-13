/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 21:44:54 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/13 20:16:34 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

Account::Account (int initial_deposit)
{
	t::_accountIndex = t::_nbAccounts;
	t::_nbAccounts += 1; 
	t::_amount = initial_deposit;
	t::_totalAmount += initial_deposit;
	t::_nbDeposits = 1;
	t::_totalNbDeposits += 1;
	t::_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "Initial deposit of: " << initial_deposit << "was successful" << std::endl;
}

Account::~Account (void)
{
	t::_nbAccounts -= 1;
}

int				Account::getNbAccounts(void)
{
	return (t::_nbAccounts);
}

int				Account::getTotalAmount(void)
{
	return (t::_totalAmount);
}

int				Account::getNbDeposits(void)
{
	return (t::_totalNbDeposits);
}

int				Account::getNbWithdrawals(void)
{
	return (t::_totalNbWithdrawals);
}

void		Account::displayAccountsInfos(void)
{
	std::cout << "Number of accounts: " << t::_nbAccounts << std::endl;
	std::cout << "Total of all balances: " << t::_totalAmount << std::endl;
	std::cout << "Total number of deposits: " << t::_totalNbDeposits << std::endl;
	std::cout << "Total number of withdrawals: " << t::_totalNbWithdrawals << std::endl;
}

void			Account::makeDeposit(int deposit)
{
	t::_amount += deposit;
	t::_totalAmount += deposit;
	t::_nbDeposits += 1;
	t::_totalNbDeposits += 1;
	std::cout << "Deposit of: " << deposit << "was successful" << std::endl;
	return ;
}

bool			Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal < t::_amount)
	{
		t::_amount -= withdrawal;
		t::_totalAmount -= withdrawal;
		t::_nbWithdrawals += 1;
		t::_totalNbWithdrawals += 1;
		std::cout << "Withdrawal of: " << withdrawal << "was successful" << std::endl;
		return (true);
	}
	else
	{
		std::cout << "Withdrawal of: " << withdrawal << "was unsuccessful" << std::endl;
		return (false);
	}
}

int				Account::checkAmount(void) const
{
	std::cout << "Your current balance is: " << t::_amount << std::endl;
	return (t::_amount);
}

void		Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "Account index: " << t::_accountIndex << std::endl;
	std::cout << "Balance: " << t::_amount << std::endl;
	std::cout << "Number of deposits: " << t::_nbDeposits << std::endl;
	std::cout << "Number of withdrawals: " << t::_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t ttime = time(0);
    
	char* dt = ctime(&ttime);
	std::cout << "The current local date and time is: " << dt << std::endl;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;