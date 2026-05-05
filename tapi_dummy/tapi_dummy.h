/* SPDX-License-Identifier: MIT */
/* Copyright (C) 2026 Interpretica Unipessoal Lda */
/** @file
 * @brief Dummy TAPI
 *
 * @defgroup tapi_dummy Dummy engine-side TAPI (tapi_dummy)
 * @{
 *
 * Minimal engine-side TAPI provided by the external tsf-dummy
 * repository. It exists to test the TE_EXT_REPO machinery of the
 * Test Environment Builder.
 */

#ifndef __TAPI_DUMMY_H__
#define __TAPI_DUMMY_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Get a greeting string from the external repository.
 *
 * @return A static greeting string.
 */
extern const char *tapi_dummy_greeting(void);

#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* !__TAPI_DUMMY_H__ */

/**@} <!-- END tapi_dummy --> */
