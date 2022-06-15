#include "inc/midi.hpp"

midi::MidiFile::MidiFile(std::string path)
{
	// second solution: https://stackoverflow.com/questions/36658734/c-get-all-bytes-of-a-file-in-to-a-char-array/36659103#36659103
	std::ifstream inf(path, std::ios_base::binary);
	std::vector<char> bytes = std::vector<char>(std::istreambuf_iterator<char>(inf), std::istreambuf_iterator<char>());
	
	for (int i = 0; i < 10; i++)
		std::cout << bytes[i];
	std::cout << std::endl;

}

int main()
{
	midi::MidiFile m("../res/chpn_op25_e1.mid");
}
