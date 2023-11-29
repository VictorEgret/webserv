/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:01:50 by vegret            #+#    #+#             */
/*   Updated: 2023/11/29 19:17:30 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "../includes/Config.hpp"
#include "../includes/Server.hpp"

int main(int argc, char const *argv[]) {

	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " [configuration file]\n";
		return 1;
	}

	try {
		Config config(argv[1]);
	} catch (std::exception& e) {
		std::cerr << e.what() << '\n';
		return 1;
	}

	return 0;
}
