#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace midi
{
class MidiFile
{
public:
    MidiFile(std::string path);
private:
	std::vector<int> notes;

};
} 
