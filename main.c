/**
 * This is the entry of the module.
 */

#include "common.h"

/* Optional; uncomment this line if you need it. */
// MODULE_LICENSE(GPL);

int __init !!NAME!!_init(void)
{
    /* Your code here */
    !!NAME!!_info("initialized.");
    return 0;
}

void __exit !!NAME!!_exit(void)
{
    /* Your code here */
    !!NAME!!_info("removed.");
}

module_init(!!NAME!!_init);
module_exit(fin_exit);
