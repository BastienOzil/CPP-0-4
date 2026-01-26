/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:12:51 by bozil             #+#    #+#             */
/*   Updated: 2026/01/26 14:15:41 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replaceAll(const std::string &content, const std::string &s1, const std::string &s2)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    if (s1.empty())
        return (content);

    while (pos < content.length())
    {
        found = content.find(s1, pos);
        if (found == std::string::npos)
        {
            result.append(content, pos, content.length() - pos);
            break;
        }
        result.append(content, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    return (result);
}
