/**
 * The entry of the !!NAME!! module.
 */

#include "common.h"

/* TODO: modify this line per your need. */
MODULE_LICENSE("GPL v2");

int __init !!NAME!!_init(void)
{
    /* TODO: insert your code here */
    !!NAME!!_info("initialized.");
    return 0;
}

void __exit !!NAME!!_exit(void)
{
    /* TODO: insert your code here */
    !!NAME!!_info("removed.");
}

module_init(!!NAME!!_init);
module_exit(!!NAME!!_exit);
