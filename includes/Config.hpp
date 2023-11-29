/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Config.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:49:39 by vegret            #+#    #+#             */
/*   Updated: 2023/11/29 19:24:08 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_HPP
# define CONFIG_HPP
# include <string>

class Config {
	private:

	public:
		Config();
		Config(std::string path);
		Config(const Config& source);
		~Config();

		Config &operator=(const Config &source);
};

#endif