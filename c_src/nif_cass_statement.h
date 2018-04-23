#ifndef ERLCASS_C_SRC_NIF_CASS_STATEMENT_H
#define ERLCASS_C_SRC_NIF_CASS_STATEMENT_H

#include "erlcass.h"
#include "nif_utils.h"

CassStatement* get_statement(ErlNifEnv* env, ErlNifResourceType* resource_type, ERL_NIF_TERM arg);
ERL_NIF_TERM nif_cass_statement_new(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]);
ERL_NIF_TERM nif_cass_statement_new(ErlNifEnv* env, ErlNifResourceType* resource_type, const CassPrepared* prep, const ConsistencyLevelOptions& consistency);
ERL_NIF_TERM nif_cass_statement_bind_parameters(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]);
void nif_cass_statement_free(ErlNifEnv* env, void* obj);

#endif
