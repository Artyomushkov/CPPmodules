/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:50:14 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/17 15:58:06 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int replace(const std::string& filename, const std::string& s1,
			const std::string& s2);

int main(void) {

	int a = replace("input_file", "lol", "kek");
	std::cout << a << std::endl;
	a = replace("not_exist_file", "lol", "kek");
	std::cout << a << std::endl;
	a = replace("file_chmod", "lol", "kek");
	std::cout << a << std::endl;
}
