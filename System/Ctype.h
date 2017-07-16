#pragma once

#include "Types.h"

namespace System
{
	enum ASCII_Type
	{
		Unknown,
		Control,
		Symbol,
		Numeric,
		ULetter,
		DLetter
	};

	ASCII_Type GetType(const AthenaByte);
}
