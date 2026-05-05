/* SPDX-License-Identifier: MIT */
/* Copyright (C) 2026 Interpretica Unipessoal Lda */
/** @file
 * @brief Dummy TAPI
 *
 * Implementation of the dummy engine-side TAPI.
 */

#include "te_config.h"

#include "te_defs.h"
#include "tapi_dummy.h"

/* See description in tapi_dummy.h */
const char *
tapi_dummy_greeting(void)
{
    return "Greetings from the external tsf-dummy repository!";
}
