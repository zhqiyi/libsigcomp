/**
	Copyright (C) 2009 Mamadou Diop <diopmamadou@yahoo.fr>

	This file is part of libSigComp project.

    libSigComp is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
	
    libSigComp is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.
	
    You should have received a copy of the GNU Lesser General Public License
    along with libSigComp.  

	
*/

#if !defined(LIBSIGCOMP_PRESENCE_DICT_STATE_H)
#define LIBSIGCOMP_PRESENCE_DICT_STATE_H

#include <libsigcomp/libsigcomp_config.h>

#include <libsigcomp/MYTYPES.h>
#include <libsigcomp/SigCompLayer/SigCompState.h>

__NS_DECLARATION_BEGIN__

class LIBSIGCOMP_API PresenceDictionaryState : public SigCompState
{
public:
	PresenceDictionaryState();
};

__NS_DECLARATION_END__

#endif // LIBSIGCOMP_PRESENCE_DICT_STATE_H