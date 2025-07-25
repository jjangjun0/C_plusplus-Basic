#include <iostream>
#include <iomanip> // setprecision(), setw(), setfill()
#include <conio.h> // getch()

#include <fstream>

#include <math.h>       // abs(), labs(), fabs(), sqrt(), ceil(), floor(), sin(), cos(), tan(), pow(), log()
#include <string.h>     // strcpy(), strncpy(), strcat(), strchr(), strrchr(), itoa(), ltoa(), ecvt(),
                        // strcmp(), strlen(), strrev(), strset(), strupr(), strlwr(), tolower(), toupper()

#include <stdlib.h>     // rand(), srand(), atof(), atoi(), atol()

#include <direct.h>     // chdir(), getcwd(), mkdir(), rmdir()
#include <io.h>         // access(), chmod(), remove(), rename()
#include <search.h>     // bsearch(), lfind(), lsearch(), qsort()

#include <cstdlib> // system(), rand(), srand()
#include <cmath> // pow(), sqrt()
#include <cstring> // strlen(), strcspn() : 처음 나타나는 인덱스를 반환하는 함수
#include <ctime> // time()


/*
 * C 헤더 vs C++ 헤더
 * C 헤더는 C++에서 권장되지 않는다.
 * cstdlib는 C++ 표준 헤더로, std::rand()처럼 사용 가능하다. 즉, std namespace 안에 있다.
*/

// t006, t031, t057, t062, t067, t068, t072, t074, t075, t076