

//add D wrapper's for Allegro, SDL, etc.
// add C/C++ wrappers for Allegro, etc.


// We could also support AI through this mechanism!




// controllers implement control slots.
struct control_slot_t //"controls" or "command" ?
	{
	}
	
struct controller_t
	{
	}

struct keyboard_t
	{
	char keys[256];
	}
struct mouse_t
	{
	int x;
	int y;
	char buttons[10];
	}
struct touchscreen_t
	{
	int x[10];
	int y[10];
	char button;
	}
	
struct device_t
	{
	}

struct state_t
	{
	char name[256];
	int value;
	}
	
	
struct profile_t
	{
	}
struct sub_profile_t
	{
	}

struct instance_t
	{
	profile_t profiles[10];
	sub_profile_t sub_profiles[20];
	}

int main()
	{
	}
