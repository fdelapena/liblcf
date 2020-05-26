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

#ifndef LCF_RPG_MOVEROUTE_H
#define LCF_RPG_MOVEROUTE_H

// Headers
#include <vector>
#include "lcf/rpg/movecommand.h"
#include <ostream>

/**
 * rpg::MoveRoute class.
 */
namespace lcf {
namespace rpg {
	class MoveRoute {
	public:
		std::vector<MoveCommand> move_commands;
		bool repeat = true;
		bool skippable = false;
	};

	inline bool operator==(const MoveRoute& l, const MoveRoute& r) {
		return l.move_commands == r.move_commands
		&& l.repeat == r.repeat
		&& l.skippable == r.skippable;
	}

	inline bool operator!=(const MoveRoute& l, const MoveRoute& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const MoveRoute& obj) {
		os << "MoveRoute{";
		os << "move_commands=";
		for (size_t i = 0; i < obj.move_commands.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.move_commands[i];
		}
		os << "]";
		os << " repeat="<< obj.repeat;
		os << " skippable="<< obj.skippable;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
