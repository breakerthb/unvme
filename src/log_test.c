#include "unvme_log.h"

#include <string.h>

int main()
{
    if (log_open("unvme.log", "w")) 
        exit(1);
    
    int a = 10;
    char* pBuf = "abcdefg";  
    
    DEBUG("debug log : %d", a);
    DEBUG_FN("debug_fn log : %d", a);
    DEBUG("HEX_DUMP :");
    HEX_DUMP(pBuf, (strlen(pBuf) + 1) * sizeof(char));
    
    log_close();
    
    return 0;
}