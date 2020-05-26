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

#ifndef LCF_RPG_SAVEMAPEVENT_H
#define LCF_RPG_SAVEMAPEVENT_H

// Headers
#include "lcf/rpg/savemapeventbase.h"
#include <stdint.h>
#include "lcf/rpg/event.h"
#include "lcf/rpg/saveeventexecstate.h"
#include <ostream>

/**
 * rpg::SaveMapEvent class.
 */
namespace lcf {
namespace rpg {
	class SaveMapEvent : public SaveMapEventBase {
	public:
		void Setup(const rpg::Event& event);
		int ID = 0;
		bool waiting_execution = false;
		int32_t original_move_route_index = 0;
		bool triggered_by_decision_key = false;
		SaveEventExecState parallel_event_execstate;
	};

	inline bool operator==(const SaveMapEvent& l, const SaveMapEvent& r) {
		return l.waiting_execution == r.waiting_execution
		&& l.original_move_route_index == r.original_move_route_index
		&& l.triggered_by_decision_key == r.triggered_by_decision_key
		&& l.parallel_event_execstate == r.parallel_event_execstate;
	}

	inline bool operator!=(const SaveMapEvent& l, const SaveMapEvent& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const SaveMapEvent& obj) {
		os << "SaveMapEvent{";
		os << "waiting_execution="<< obj.waiting_execution;
		os << " original_move_route_index="<< obj.original_move_route_index;
		os << " triggered_by_decision_key="<< obj.triggered_by_decision_key;
		os << " parallel_event_execstate="<< obj.parallel_event_execstate;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
