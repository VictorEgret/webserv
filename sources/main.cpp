/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:01:50 by vegret            #+#    #+#             */
/*   Updated: 2023/11/29 20:36:48 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Config.hpp"
#include "Server.hpp"

int main(int argc, char const *argv[]) {

	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " [configuration file]\n";
		return 1;
	}

	try {
		Config config(argv[1]);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		return 1;
	}

	return 0;
}
