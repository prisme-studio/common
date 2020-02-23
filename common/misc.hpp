//
//  misc.hpp
//  common
//
//  Created by Valentin Dufois on 2020-02-22.
//  Copyright © 2020 Perihelion. All rights reserved.
//

#ifndef misc_hpp
#define misc_hpp

#include <chrono>

namespace timing {

extern long appStartTime;

inline long now() {
	using namespace std::chrono;
	// Get current time with native precision
	auto now = high_resolution_clock::now();
	// Convert time_point to signed integral type
	return now.time_since_epoch().count();
}

inline long millisSinceStart() {
	return now() - appStartTime;
}

}

#endif /* misc_hpp */
