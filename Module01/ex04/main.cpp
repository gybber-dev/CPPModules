#include <iostream>
#include <fstream>

std::string readFileToStr(std::string &fileName) {
	std::ifstream in(fileName);
	std::string line;
	if (in.is_open())
	{
		std::string buf;
		while (getline(in, buf))
		{
			line += (line.length() > 0) ? "\n" + buf : buf;
		}
	}
	in.close();
	return line;
}

void writeIntoFile(const std::string &content, const std::string &fileName)
{
	std::ofstream out(fileName);
	if (out.is_open())
	{
		out << content;
	}
	out.close();
}

std::string replaceSublines(std::string content, const std::string &s1, const std::string &s2)
{
	std::string::size_type start = 0;
	std::string::size_type cutLen = s1.length();
	std::string::size_type putLen = s2.length();
	while (1) {
		std::string::size_type pos = content.find(s1, start);
		if (pos == std::string::npos) {
			break ;
		}
		content.erase(pos, cutLen);
		content.insert(pos, s2);
		start = pos + putLen;
	}
	return content;
}

int main (int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error: wrong number of arguments\n";
		return 1;
	}
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string newFileName = fileName + ".replace";
	std::string content = readFileToStr(fileName);

	if (content.length() == 0) {
		std::cout << "Error: can't read the file\n";
		return 1;
	}
	const std::string newContent = replaceSublines(content, s1, s2);
	writeIntoFile(newContent, newFileName);
	return 0;
}