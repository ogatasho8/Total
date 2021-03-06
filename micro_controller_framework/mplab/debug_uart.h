char g_debug[64];

#if DEBUG
#define dbg_print(enable, fmt) \
do { \
    if(enable) \
    { \
        sprintf(g_debug, fmt); \
        USARTWriteString(g_debug); \
    } \
} while (0);
#else
#define dbg_print(enable, fmt) ;
#endif

#if DEBUG
#define dbg_print_line(enable, fmt) \
do { \
    if(enable) \
    { \
        sprintf(g_debug, fmt"\r\n"); \
        USARTWriteString(g_debug); \
    } \
} while (0);
#else
#define dbg_print_line(enable, fmt) ;
#endif

#if DEBUG
#define dbg_print1(enable, fmt, x1) \
do { \
    if(enable) \
    { \
        sprintf(g_debug, fmt"\r\n", x1); \
        USARTWriteString(g_debug); \
    } \
} while (0);
#else
#define dbg_print1(enable, fmt, x1) ;
#endif

#if DEBUG
#define dbg_print2(enable, fmt, x1, x2) \
do { \
    if(enable) \
    { \
        sprintf(g_debug, fmt"\r\n", x1, x2); \
        USARTWriteString(g_debug); \
    } \
} while (0);
#else
#define dbg_print2(enable, fmt, x1, x2) ;
#endif

#if DEBUG
#define dbg_print3(enable, fmt, x1, x2, x3) \
do { \
    if(enable) \
    { \
        sprintf(g_debug, fmt"\r\n", x1, x2, x3); \
        USARTWriteString(g_debug); \
    } \
} while (0);
#else
#define dbg_print3(enable, fmt, x1, x2, x3) ;
#endif

#if DEBUG
#define dbg_print4(enable, fmt, x1, x2, x3, x4) \
do { \
    if(enable) \
    { \
        sprintf(g_debug, fmt"\r\n", x1, x2, x3, x4); \
        USARTWriteString(g_debug); \
    } \
} while (0);
#else
#define dbg_print4(enable, fmt, x1, x2, x3, x4) ;
#endif
void dbg_init()
{
    USARTInit(9600);
} 
void dbg_close()
{
}                                         
