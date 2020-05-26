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

#ifndef LCF_RPG_BATTLECOMMANDS_H
#define LCF_RPG_BATTLECOMMANDS_H

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/battlecommand.h"
#include <ostream>

/**
 * rpg::BattleCommands class.
 */
namespace lcf {
namespace rpg {
	class BattleCommands {
	public:
		enum Placement {
			Placement_manual = 0,
			Placement_automatic = 1
		};
		static constexpr auto kPlacementTags = lcf::makeEnumTags<Placement>(
			"manual",
			"automatic"
		);
		enum RowShown {
			RowShown_front = 0,
			RowShown_back = 1
		};
		static constexpr auto kRowShownTags = lcf::makeEnumTags<RowShown>(
			"front",
			"back"
		);
		enum BattleType {
			BattleType_traditional = 0,
			BattleType_alternative = 1,
			BattleType_gauge = 2
		};
		static constexpr auto kBattleTypeTags = lcf::makeEnumTags<BattleType>(
			"traditional",
			"alternative",
			"gauge"
		);
		enum WindowSize {
			WindowSize_large = 0,
			WindowSize_small = 1
		};
		static constexpr auto kWindowSizeTags = lcf::makeEnumTags<WindowSize>(
			"large",
			"small"
		);
		enum Transparency {
			Transparency_opaque = 0,
			Transparency_transparent = 1
		};
		static constexpr auto kTransparencyTags = lcf::makeEnumTags<Transparency>(
			"opaque",
			"transparent"
		);
		enum Facing {
			Facing_retain = 0,
			Facing_up = 1,
			Facing_right = 2,
			Facing_down = 3,
			Facing_left = 4
		};
		static constexpr auto kFacingTags = lcf::makeEnumTags<Facing>(
			"retain",
			"up",
			"right",
			"down",
			"left"
		);

		int32_t placement = 0;
		bool death_handler_unused = 0;
		int32_t row = 0;
		int32_t battle_type = 0;
		bool unused_display_normal_parameters = true;
		std::vector<BattleCommand> commands;
		bool death_handler = 0;
		int32_t death_event = 1;
		int32_t window_size = 0;
		int32_t transparency = 0;
		bool death_teleport = false;
		int32_t death_teleport_id = 1;
		int32_t death_teleport_x = 0;
		int32_t death_teleport_y = 0;
		int32_t death_teleport_face = 0;
	};

	inline bool operator==(const BattleCommands& l, const BattleCommands& r) {
		return l.placement == r.placement
		&& l.death_handler_unused == r.death_handler_unused
		&& l.row == r.row
		&& l.battle_type == r.battle_type
		&& l.unused_display_normal_parameters == r.unused_display_normal_parameters
		&& l.commands == r.commands
		&& l.death_handler == r.death_handler
		&& l.death_event == r.death_event
		&& l.window_size == r.window_size
		&& l.transparency == r.transparency
		&& l.death_teleport == r.death_teleport
		&& l.death_teleport_id == r.death_teleport_id
		&& l.death_teleport_x == r.death_teleport_x
		&& l.death_teleport_y == r.death_teleport_y
		&& l.death_teleport_face == r.death_teleport_face;
	}

	inline bool operator!=(const BattleCommands& l, const BattleCommands& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const BattleCommands& obj) {
		os << "BattleCommands{";
		os << "placement="<< obj.placement;
		os << " death_handler_unused="<< obj.death_handler_unused;
		os << " row="<< obj.row;
		os << " battle_type="<< obj.battle_type;
		os << " unused_display_normal_parameters="<< obj.unused_display_normal_parameters;
		os << " commands=";
		for (size_t i = 0; i < obj.commands.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.commands[i];
		}
		os << "]";
		os << " death_handler="<< obj.death_handler;
		os << " death_event="<< obj.death_event;
		os << " window_size="<< obj.window_size;
		os << " transparency="<< obj.transparency;
		os << " death_teleport="<< obj.death_teleport;
		os << " death_teleport_id="<< obj.death_teleport_id;
		os << " death_teleport_x="<< obj.death_teleport_x;
		os << " death_teleport_y="<< obj.death_teleport_y;
		os << " death_teleport_face="<< obj.death_teleport_face;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
