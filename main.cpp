#include <iostream>
#include <chrono>
#include <thread>

const std::string LINE1 = "Let's have a coffee break...\n\n";
const std::string LINEBR = "\n";
const std::string LINE2 = "    (((\n";
const std::string LINE3 = "     )))\n";
const std::string LINE4 = "   _______\n";
const std::string LINE5 = "  ||     ||q\n";
const std::string LINE6 = "   \\     /_/\n";
const std::string LINE7 = "    `---'\n";

std::string lines(int l) {
	std::string line2, line3;
	if (l%3 == 0) {
		line2 = LINEBR;
		line3 = LINEBR;
	} else if (l%3 == 1) {
		line2 = LINEBR;
		line3 = LINE3;
	} else {
		line2 = LINE2;
		line3 = LINE3;
	}
	return LINE1+line2+line3+LINE4+LINE5+LINE6+LINE7;
}

int main(int argc, char* argv[]) {
	int t = 10;
	if (argc >= 2 && std::string(argv[1]) == "-t") {
		t = std::stoi(argv[2]);
	}

	for (int i=0;i<2*t;i++) {
		// std::system("clear");
		if (i>0) std::cout << "\033[9A\033[J";
		std::cout << lines(i) << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
	return 0;
}
