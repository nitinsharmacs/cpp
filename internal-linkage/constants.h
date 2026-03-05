// this header file contains constants.
// Constants identifiers have internal linkage property by default.
// So, header file containing the definition would only be
// visible to single translation unit/source code file,
// and so does not violet ODR.

#ifndef CONSTANTS_H
#define CONSTANTS_H
const double pi{3.14};
constexpr double lightSpeed{3e10};
#endif