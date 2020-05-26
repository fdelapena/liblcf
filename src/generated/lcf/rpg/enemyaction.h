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

#ifndef LCF_RPG_ENEMYACTION_H
#define LCF_RPG_ENEMYACTION_H

// Headers
#include <stdint.h>
#include "lcf/enum_tags.h"
#include <ostream>

/**
 * rpg::EnemyAction class.
 */
namespace lcf {
namespace rpg {
	class EnemyAction {
	public:
		enum Kind {
			Kind_basic = 0,
			Kind_skill = 1,
			Kind_transformation = 2
		};
		static constexpr auto kKindTags = lcf::makeEnumTags<Kind>(
			"basic",
			"skill",
			"transformation"
		);
		enum Basic {
			Basic_attack = 0,
			Basic_dual_attack = 1,
			Basic_defense = 2,
			Basic_observe = 3,
			Basic_charge = 4,
			Basic_autodestruction = 5,
			Basic_escape = 6,
			Basic_nothing = 7
		};
		static constexpr auto kBasicTags = lcf::makeEnumTags<Basic>(
			"attack",
			"dual_attack",
			"defense",
			"observe",
			"charge",
			"autodestruction",
			"escape",
			"nothing"
		);
		enum ConditionType {
			ConditionType_always = 0,
			ConditionType_switch = 1,
			ConditionType_turn = 2,
			ConditionType_actors = 3,
			ConditionType_hp = 4,
			ConditionType_sp = 5,
			ConditionType_party_lvl = 6,
			ConditionType_party_fatigue = 7
		};
		static constexpr auto kConditionTypeTags = lcf::makeEnumTags<ConditionType>(
			"always",
			"switch",
			"turn",
			"actors",
			"hp",
			"sp",
			"party_lvl",
			"party_fatigue"
		);

		int ID = 0;
		int32_t kind = 0;
		int32_t basic = 1;
		int32_t skill_id = 1;
		int32_t enemy_id = 1;
		int32_t condition_type = 0;
		int32_t condition_param1 = 0;
		int32_t condition_param2 = 0;
		int32_t switch_id = 1;
		bool switch_on = false;
		int32_t switch_on_id = 1;
		bool switch_off = false;
		int32_t switch_off_id = 1;
		int32_t rating = 50;
	};

	inline bool operator==(const EnemyAction& l, const EnemyAction& r) {
		return l.kind == r.kind
		&& l.basic == r.basic
		&& l.skill_id == r.skill_id
		&& l.enemy_id == r.enemy_id
		&& l.condition_type == r.condition_type
		&& l.condition_param1 == r.condition_param1
		&& l.condition_param2 == r.condition_param2
		&& l.switch_id == r.switch_id
		&& l.switch_on == r.switch_on
		&& l.switch_on_id == r.switch_on_id
		&& l.switch_off == r.switch_off
		&& l.switch_off_id == r.switch_off_id
		&& l.rating == r.rating;
	}

	inline bool operator!=(const EnemyAction& l, const EnemyAction& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const EnemyAction& obj) {
		os << "EnemyAction{";
		os << "kind="<< obj.kind;
		os << " basic="<< obj.basic;
		os << " skill_id="<< obj.skill_id;
		os << " enemy_id="<< obj.enemy_id;
		os << " condition_type="<< obj.condition_type;
		os << " condition_param1="<< obj.condition_param1;
		os << " condition_param2="<< obj.condition_param2;
		os << " switch_id="<< obj.switch_id;
		os << " switch_on="<< obj.switch_on;
		os << " switch_on_id="<< obj.switch_on_id;
		os << " switch_off="<< obj.switch_off;
		os << " switch_off_id="<< obj.switch_off_id;
		os << " rating="<< obj.rating;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
