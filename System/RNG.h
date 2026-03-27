#pragma once

template <typename T> requires std::is_arithmetic_v<T>
T Random(T min, T max) // Is this too micro-optimized?
{
	static std::mt19937 mt{ std::random_device{}() };

	if constexpr (std::is_integral_v<T>)
	{
		static std::uniform_int_distribution<T> dist;

		return dist(mt, typename decltype(dist)::param_type{ min, max });
	}
	else
	{
		static std::uniform_real_distribution<T> dist;

		return dist(mt, typename decltype(dist)::param_type{ min, max });
	}
}