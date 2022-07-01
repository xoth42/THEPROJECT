#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace midi
{

class Note
{
public:
	int pitch;
	int dur;
	Note* _next;
};

class MidiFile
{
public:
    MidiFile(std::string path);
private:
	Note* first = nullptr;
};
} 
