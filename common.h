#pragma once
#include <linux/module.h>

#define MODULE_NAME !!NAME!!
#define !!NAME!!_msg_internal(kind, fmt, ...) \
    pr_##kind(MODULE_NAME ": " fmt "\n", ##__VA_ARGS__)
#define !!NAME!!_err(fmt, ...) !!NAME!!_msg_internal(err, fmt, ##__VA_ARGS__)
#define !!NAME!!_info(fmt, ...) !!NAME!!_msg_internal(info, fmt, ##__VA_ARGS__)

