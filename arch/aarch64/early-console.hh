/*
 * Copyright (C) 2014 Huawei Technologies Duesseldorf GmbH
 *
 * This work is open source software, licensed under the terms of the
 * BSD license as described in the LICENSE file in the top-level directory.
 */

#ifndef EARLY_CONSOLE_HH
#define EARLY_CONSOLE_HH

#include "drivers/pl011.hh"

namespace console {

extern PL011_Console arch_early_console;

}

#endif /* EARLY_CONSOLE_HH */
