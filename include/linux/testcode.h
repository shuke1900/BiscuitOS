#ifndef _TESTCODE_
#define _TESTCODE_

#ifdef CONFIG_TESTCODE

extern void simple_inline_assembly(void);
extern void test_get_eax(void);
extern void test_get_ebx(void);
extern void test_multi_output(void);
extern void test_set_eax(void);
extern void test_strcpy(void);
extern void test_strncpy(void);
extern void test_strcat(void);
extern void test_strncat(void);
extern void test_strcmp(void);
extern void test_strncmp(void);
extern void test_strchr(void);

#endif

#endif