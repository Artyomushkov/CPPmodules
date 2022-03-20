/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacing.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:25:25 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 13:24:23 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void	my_replace_for_string(std::string& str, size_t& found,
				const std::string& s1, const std::string& s2) {

	std::string	buf = str.substr(found + s1.length(), str.length());
	str.erase(found);
	str += s2;
	str += buf;
}

static std::string	str_upper(const std::string& str) {

	std::string res = str;
	for (int i = 0; res[i]; ++i) {
		if (res[i] > 96 && res[i] < 123)
			res[i] -= 32;
	}
	return (res);
}

int replace(const std::string& filename, const std::string& s1,
			const std::string& s2) {

	if (s1.empty() || s2.empty()) {
		std::cout << "invalid arguments for function" << std::endl;
		return (1);
	}
	std::ifstream ifs(filename);
	if (!ifs) {
		std::cout << "Opening file error" << std::endl;
		return (2);
	}
	std::ofstream ofs(str_upper(filename) + ".repalce");
	if (!ofs) {
		std::cout << "Making replace file error" << std::endl;
		return (3);
	}
	std::string	str;
	std::size_t found;
	while (getline(ifs, str)) {
		found = 0;
		while (found != std::string::npos) {
			found = str.find(s1, found);
			if (found == std::string::npos) {
				ofs << str << std::endl;
			}
			else
				my_replace_for_string(str, found, s1, s2);
		}
	}
	ifs.close();
	ofs.close();
	return (0);
}
