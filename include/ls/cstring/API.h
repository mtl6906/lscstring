#ifndef LS_CSTRING_API_H
#define LS_CSTRING_API_H

#include "string"

namespace ls
{
    namespace cstring
    {
        class API
        {
            public:
                char *append(char *dst, const char *src);
                char *append(char *dst, const char *src, int n);
                std::string merge(std::initializer_list<std::string> l);
        };
        
        extern API api;
    }
}

#endif
