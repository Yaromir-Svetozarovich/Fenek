
#pragma once

#include <chrono>

class Utils {
public:

	static double now() {

		static long long tFirst = std::chrono::high_resolution_clock::now().time_since_epoch().count();

		auto now = std::chrono::high_resolution_clock::now();
		long long nanosSinceStart = now.time_since_epoch().count() - tFirst;

		double secondsSinceStart = double(nanosSinceStart) / 1'000'000'000;

		return secondsSinceStart;
	}

};

