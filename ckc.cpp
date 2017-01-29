
#include <stdio.h>
#include <string>

using std::string;

// UGH, this will be a BITCH to implement in C. Either use C++ or D and then port it over??



//add D wrapper's for Allegro, SDL, etc.
// add C/C++ wrappers for Allegro, etc.


// We could also support AI through this mechanism!



class profile_t{};
class sub_profile_t{};


// controllers implement control slots.

class control_slot_t //"controls" or "command" ?
	{
	};
	
class controller_t
	{
	};

class device_t
	{
	};

class keyboard_t : public device_t{};
class mouse_t : public device_t{};
class touchscreen_t : public device_t{};

class state_t
	{
	public:
	string name[256];
	int value;
	};

int main()
	{
	}
