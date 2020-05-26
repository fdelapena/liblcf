/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_RECT_H
#define LCF_RPG_RECT_H

// Headers
#include <stdint.h>
#include <ostream>

/**
 * rpg::Rect class.
 */
namespace lcf {
namespace rpg {
	class Rect {
	public:
		uint32_t l = 0;
		uint32_t t = 0;
		uint32_t r = 0;
		uint32_t b = 0;
	};

	inline bool operator==(const Rect& l, const Rect& r) {
		return l.l == r.l
		&& l.t == r.t
		&& l.r == r.r
		&& l.b == r.b;
	}

	inline bool operator!=(const Rect& l, const Rect& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Rect& obj) {
		os << "Rect{";
		os << "l="<< obj.l;
		os << " t="<< obj.t;
		os << " r="<< obj.r;
		os << " b="<< obj.b;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
