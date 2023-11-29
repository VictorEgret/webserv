/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:16:46 by vegret            #+#    #+#             */
/*   Updated: 2023/11/29 20:37:06 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"

Server::Server() {}

Server::Server(Config& config) : config(config) {}

Server::Server(const Server& source) {
	*this = source;
}

Server::~Server() {}

Server &Server::operator=(const Server &source) {
	this->config = source.config;
	return *this;
}