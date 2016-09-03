/*
 * blogc: A blog compiler.
 * Copyright (C) 2015-2016 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the BSD License.
 * See the file LICENSE.
 */

#ifndef _LOADER_H
#define _LOADER_H

#include "error.h"
#include "../common/utils.h"

char* blogc_get_filename(const char *f);
bc_slist_t* blogc_template_parse_from_file(const char *f, blogc_error_t **err);
bc_trie_t* blogc_source_parse_from_file(const char *f, blogc_error_t **err);
bc_slist_t* blogc_source_parse_from_files(bc_trie_t *conf, bc_slist_t *l,
    blogc_error_t **err);

#endif /* _LOADER_H */
