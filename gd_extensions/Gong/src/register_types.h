/* godot-cpp integration testing project.
 *
 * This is free and unencumbered software released into the public domain.
 */

#ifndef EXAMPLE_REGISTER_TYPES_H
#define EXAMPLE_REGISTER_TYPES_H


#include <gdextension_interface.h>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>


using namespace godot;

void initialize_Gong_library_init_module(ModuleInitializationLevel p_level);
void uninitialize_Gong_library_init_module(ModuleInitializationLevel p_level);

#endif 
// EXAMPLE_REGISTER_TYPES_H
