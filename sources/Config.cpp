/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Config.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:00:37 by vegret            #+#    #+#             */
/*   Updated: 2023/11/29 20:47:40 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <cstdlib>
#include <stdexcept>
#include <sys/stat.h>
#include "Config.hpp"

Config::Config() {
}

static bool	is_dir(const char* path) {
	struct stat buf;
	stat(path, &buf);
	return (S_ISDIR(buf.st_mode));
}

Config::Config(const char* path) {
	if (is_dir(path))
		throw std::runtime_error("Error: file is a directory.");

	std::ifstream input_data(path);

	if (!input_data.is_open())
		throw std::runtime_error("Error: could not open file.");

	std::string line;

	while (std::getline(input_data, line)) {
		// TODO Parse config
	}

	input_data.close();
}

Config::Config(const Config& source) {
	*this = source;
}

Config::~Config() {}

Config &Config::operator=(const Config &source __attribute__((unused))) {
	return *this;
}
