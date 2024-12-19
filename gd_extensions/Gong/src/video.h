/* godot-cpp integration testing project.
 *
 * This is free and unencumbered software released into the public domain.
 */

#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H

// We don't need windows.h in this example plugin but many others do, and it can
// lead to annoying situations due to the ton of macros it defines.
// So we include it and make sure CI warns us if we use something that conflicts
// with a Windows define.
#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot; 

class Video : public Resource {	
	GDCLASS(Video,Resource);

private:
	
public:
 
protected:
	
	static  inline void _bind_methods(){

	}

};




#endif // EXAMPLE_CLASS_H
