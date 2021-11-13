#include "Karen.hpp"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
	if (argc != 2) {
		cout << BLABLA_MESSAGE << endl;
		return (1);
	}
	Karen karen;
	karen.complain(argv[1]);
	return 0;
}