#ifndef ERLCASS_C_SRC_CASS_BINDING_H
#define ERLCASS_C_SRC_CASS_BINDING_H

#include "cassandra.h"
#include "erl_nif.h"

namespace cass {
    class DataType;
}

ERL_NIF_TERM cass_bind_by_index(ErlNifEnv* env, CassStatement* statement, size_t index, const cass::DataType* data_type, ERL_NIF_TERM value);

#endif
