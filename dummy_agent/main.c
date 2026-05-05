/* SPDX-License-Identifier: MIT */
/* Copyright (C) 2026 Interpretica Unipessoal Lda */
/** @file
 * @brief Dummy Test Agent
 *
 * Minimal external Test Agent type provided by the tsf-dummy
 * repository. It exists to test the TE_EXT_REPO agent machinery of
 * the Test Environment Builder: it is a real executable linked with
 * TE libraries, but it does not implement the RCF protocol.
 */

#include <stdio.h>

#include "te_vector.h"

int
main(void)
{
    te_vec vec = TE_VEC_INIT(int);

    te_vec_free(&vec);
    printf("dummy_agent is alive on platform " TE_AGT_PLATFORM "\n");
    return 0;
}
