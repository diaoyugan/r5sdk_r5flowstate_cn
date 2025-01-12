#pragma once
//#ifndef NDEBUG
//#   define Assert(condition, message) \
//    do { \
//        if (! (condition)) { \
//            std::cerr << "Assertion '" #condition "' failed in " << __FILE__ \
//                      << " line " << __LINE__ << ": " << message << std::endl; \
//            assert(condition); \
//        } \
//    } while (false)
//#else
#   define Assert(condition, ...) assert(condition)

// TODO: this needs to go to dbg.h
#   define AssertMsg(condition, ...) assert(condition)
//#endif
