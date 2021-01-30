#if defined(_WIN32)
    // Windows
    #define MY_LIB_EXPORT __declspec(dllexport)
    #define MY_LIB_IMPORT __declspec(dllimport)
#elif defined(__linux__)
    //  Linux
    #define MY_LIB_EXPORT __attribute__((visibility("default")))
    #define MY_LIB_IMPORT
#else
    //  do nothing and hope for the best?
    #define MY_LIB_EXPORT
    #define MY_LIB_IMPORT
    #pragma warning Unknown dynamic link import/export semantics.
#endif


#ifdef __MY_LIB_BUILD
    #define MY_LIB_API MY_LIB_EXPORT
#else
    #define MY_LIB_API MY_LIB_IMPORT
#endif