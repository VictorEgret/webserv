/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:49:39 by vegret            #+#    #+#             */
/*   Updated: 2023/11/29 19:24:04 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP
# include <string>
# include "Config.hpp"

class Server {
	private:
		Config config;

	public:
		Server();
		Server(Config& config);
		Server(const Server& source);
		~Server();

		Server &operator=(const Server &source);
};

#endif