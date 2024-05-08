#ifndef FILESWORK_H
#define FILESWORK_H

#include <fstream>
#include <string>

class FilesWork {
	private:
		std::string filename;
	public:
		FilesWork(const std::string& filename);
		void write_file(const std::string& data);
		void read_file();
		FilesWork& operator+=(const std::string& data);
};

#endif
