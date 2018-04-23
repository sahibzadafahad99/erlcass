#ifndef ERLCASS_C_SRC_NIF_DATE_TIME_H
#define ERLCASS_C_SRC_NIF_DATE_TIME_H

#include "erl_nif.h"

ERL_NIF_TERM nif_cass_date_from_epoch(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]);
ERL_NIF_TERM nif_cass_time_from_epoch(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]);
ERL_NIF_TERM nif_cass_date_time_to_epoch(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]);

#endif
