#pragma once

#ifdef HYPATIA_EXPORTS
#define HYPATIA_API __declspec(dllexport)
#else
#define HYPATIA_API __declspec(dllimport)
#endif

extern "C" HYPATIA_API unsigned long long rad_deg(
	unsigned long long a
);

extern "C" HYPATIA_API unsigned long long deg_rad(
	unsigned long long a
);

extern "C" HYPATIA_API unsigned long long factorial(
	unsigned long long a
);

extern "C" HYPATIA_API unsigned long long permutation(
	unsigned long long a, unsigned long long b
);

extern "C" HYPATIA_API unsigned long long combination(
	unsigned long long a, unsigned long b
);
extern "C" HYPATIA_API unsigned long long pascal_row(

);
extern "C" HYPATIA_API unsigned long long katsman_row(
	unsigned long long a, unsigned long long b
);