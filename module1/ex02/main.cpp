/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:01:21 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 18:12:21 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {

	std::string 	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout
		<< "adress in memory of string " << &str << std::endl
		<< "adress in memory of string by ptr " << stringPTR << std::endl
		<< "adress in memory of string by ref " << &stringREF << std::endl
		<< "string value by ptr " << *stringPTR << std::endl
		<< "string value by ref " << stringREF << std::endl;
}
