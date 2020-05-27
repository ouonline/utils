#ifndef __UTILS_STR_UTILS_H__
#define __UTILS_STR_UTILS_H__

#ifdef __cplusplus
extern "C" {
#endif

int hex2int(const char* src, int* dst);
int hex2long(const char* src, long* dst);
int bin2int(const char* src, int* dst);
int bin2long(const char* src, long* dst);

int ndec2int(const char* src, unsigned int len, int* dst);
int nhex2int(const char* src, unsigned int len, int* dst);
int ndec2long(const char* src, unsigned int len, long* dst);
int nhex2long(const char* src, unsigned int len, long* dst);

#ifdef __cplusplus
}
#endif

#endif
