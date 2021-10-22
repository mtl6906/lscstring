#include "ls/cstring/API.h"
#include "string"

using namespace std;

namespace ls
{
    namespace cstring
    {
	cstring::API api;

        char *API::append(char *dst, const char *src)
        {
            while(*src)
                *dst++ = *src++;
            *dst = '\0';
            return dst;
        }
        
        char *API::append(char *dst, const char *src, int n)
        {
            while(*src && n)
            {
                *dst++ = *src++;
                --n;
            }
            *dst = '\0';
            return dst;
        }

        string API::merge(initializer_list<string> l)
        {
            int len = 0;
            for(auto it = l.begin(); it != l.end(); ++it)
                len += it -> size();
            string result;
            result.reserve(len);
            for(auto it = l.begin(); it != l.end(); ++it)
                result.append(*it);           
            return result;
        }

	string API::suffix(const string &str)
	{
		auto dot = str.find(".");
		if(dot == string::npos)
			return "";
		return str.substr(dot + 1);
	}
    }
}
