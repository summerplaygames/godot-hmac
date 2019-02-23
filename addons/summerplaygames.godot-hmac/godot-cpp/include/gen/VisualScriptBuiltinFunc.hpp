#ifndef GODOT_CPP_VISUALSCRIPTBUILTINFUNC_HPP
#define GODOT_CPP_VISUALSCRIPTBUILTINFUNC_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualScriptBuiltinFunc.hpp"

#include "VisualScriptNode.hpp"
namespace godot {


class VisualScriptBuiltinFunc : public VisualScriptNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualScriptBuiltinFunc"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum BuiltinFunc {
		MATH_SIN = 0,
		MATH_COS = 1,
		MATH_TAN = 2,
		MATH_SINH = 3,
		MATH_COSH = 4,
		MATH_TANH = 5,
		MATH_ASIN = 6,
		MATH_ACOS = 7,
		MATH_ATAN = 8,
		MATH_ATAN2 = 9,
		MATH_SQRT = 10,
		MATH_FMOD = 11,
		MATH_FPOSMOD = 12,
		MATH_FLOOR = 13,
		MATH_CEIL = 14,
		MATH_ROUND = 15,
		MATH_ABS = 16,
		MATH_SIGN = 17,
		MATH_POW = 18,
		MATH_LOG = 19,
		MATH_EXP = 20,
		MATH_ISNAN = 21,
		MATH_ISINF = 22,
		MATH_EASE = 23,
		MATH_DECIMALS = 24,
		MATH_STEPIFY = 25,
		MATH_LERP = 26,
		MATH_INVERSE_LERP = 27,
		MATH_RANGE_LERP = 28,
		MATH_DECTIME = 29,
		MATH_RANDOMIZE = 30,
		MATH_RAND = 31,
		MATH_RANDF = 32,
		MATH_RANDOM = 33,
		MATH_SEED = 34,
		MATH_RANDSEED = 35,
		MATH_DEG2RAD = 36,
		MATH_RAD2DEG = 37,
		MATH_LINEAR2DB = 38,
		MATH_DB2LINEAR = 39,
		MATH_POLAR2CARTESIAN = 40,
		MATH_CARTESIAN2POLAR = 41,
		MATH_WRAP = 42,
		MATH_WRAPF = 43,
		LOGIC_MAX = 44,
		LOGIC_MIN = 45,
		LOGIC_CLAMP = 46,
		LOGIC_NEAREST_PO2 = 47,
		OBJ_WEAKREF = 48,
		FUNC_FUNCREF = 49,
		TYPE_CONVERT = 50,
		TYPE_OF = 51,
		TYPE_EXISTS = 52,
		TEXT_CHAR = 53,
		TEXT_STR = 54,
		TEXT_PRINT = 55,
		TEXT_PRINTERR = 56,
		TEXT_PRINTRAW = 57,
		VAR_TO_STR = 58,
		STR_TO_VAR = 59,
		VAR_TO_BYTES = 60,
		BYTES_TO_VAR = 61,
		COLORN = 62,
		FUNC_MAX = 63,
	};

	// constants


	static VisualScriptBuiltinFunc *_new();

	// methods
	void set_func(const int64_t which);
	VisualScriptBuiltinFunc::BuiltinFunc get_func();

};

}

#endif