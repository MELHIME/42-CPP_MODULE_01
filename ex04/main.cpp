/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:17:19 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/10 20:50:27 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string readfromfile(std::ifstream &file)
{
    std::string content = "";
    std::string line = "";
    while (std::getline(file, line))
	{
		if (!file.eof())
			content += line + '\n';
		else
			content += line;
		
	}
    return (content);
}

std::string replace(std::string oldcontent, std::string oldvalue, std::string newvalue)
{
    std::string res = "";
    size_t end = oldcontent.find(oldvalue);
    size_t start = 0;

    if (newvalue == oldvalue)
        return (oldcontent);
    while(end != std::string::npos)
    {
        res += oldcontent.substr(start, end - start);
        res += newvalue;
        start = end + oldvalue.length();
        end = oldcontent.find(oldvalue, start);
    }
    res += oldcontent.substr(start);
    return(res);
}

void    writetofile(std::ofstream &file, std::string content)
{
    if (file.good())
        file << content;
    else
        std::cerr << "Error!!! unable to write to the file"<< std::endl;
}
int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cerr  << argv[0] << " Use : " << "filename - s1 - s2." << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string	oldvalue = argv[2];
	std::string newvalue = argv[3];
	std::string	oldcontent;
	std::string newcontent;
	std::ifstream oldfile;
	std::ofstream newfile;

	oldfile.open(filename.c_str());
    if (oldfile.good())
    {
        std::cout << filename << " has been opened successfully" << std::endl;
        newfile.open((filename + ".replace").c_str());
        if(newfile.good())
            std::cout << (filename + ".replace")<< " has been created successfully" << std::endl;
        else
            std::cout << "Error!!! can't create : " << (filename + ".replace") << std::endl;
    }
    else
        std::cerr << "Error!!! can't open : " << filename << std::endl;

	oldcontent = readfromfile(oldfile);
    newcontent = replace(oldcontent, oldvalue, newvalue);
    writetofile(newfile, newcontent);
	if (newfile.is_open())
        newfile.close();
    if (oldfile.is_open())
        oldfile.close();
	return 0;
}