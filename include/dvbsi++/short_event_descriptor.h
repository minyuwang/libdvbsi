/*
 * $Id$
 *
 * Copyright (C) 2002-2004 Andreas Oberritter <obi@saftware.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __short_event_descriptor_h__
#define __short_event_descriptor_h__

#include "descriptor.h"

class ShortEventDescriptor : public Descriptor
{
	protected:
		std::string iso639LanguageCode;
		unsigned eventNameLength			: 8;
		std::string eventName;
		unsigned textLength				: 8;
		std::string text;

	public:
		ShortEventDescriptor(const uint8_t * const buffer);

		const std::string &getIso639LanguageCode(void) const;
		const std::string &getEventName(void) const;
		const std::string &getText(void) const;
};

#endif /* __short_event_descriptor_h__ */