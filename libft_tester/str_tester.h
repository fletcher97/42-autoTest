#ifndef STR_TESTER_H
#define STR_TESTER_H

#include "test.h"

test_t *test_strlen(data_t *p);
test_t *test_strlcpy(data_t *p);
test_t *test_strlcat(data_t *p);
test_t *test_strchr(data_t *p);
test_t *test_strrchr(data_t *p);
test_t *test_strnstr(data_t *p);
test_t *test_strncmp(data_t *p);
test_t *test_strjoin(data_t *p);
test_t *test_strtrim(data_t *p);

#endif // STR_TESTER_H
