/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:19:46 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 16:23:16 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	Zombie *zombie1 = newZombie("zombie1");
	Zombie *zombie2 = newZombie("zombie2");
    randomChump("zombie3");    
	zombie1->announce();
	zombie2->announce();    
	delete zombie1;
	delete zombie2;
	return (0);
}

