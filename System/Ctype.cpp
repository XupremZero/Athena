#include "Ctype.h"

System::ASCII_Type System::GetType(const AthenaByte c)
{
	if (c > -1 && c < 33)
		return ASCII_Type::Control;
	else if ((c > 32 && c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97) || (c > 122 && c < 127))
		return ASCII_Type::Symbol;
	else if (c > 47 && c < 58)
		return ASCII_Type::Numeric;
	else if (c > 64 && c < 91)
		return ASCII_Type::ULetter;
	else if (c > 96 && c < 123)
		return ASCII_Type::DLetter;
	else
		return ASCII_Type::Unknown;
}
