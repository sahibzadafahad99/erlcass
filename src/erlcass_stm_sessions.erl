-module(erlcass_stm_sessions).

-export([
    create/0,
    set/3,
    get/1
]).

-define(ETS_PREPARED_STM_SESSIONS, erlcass_ets_prepared_stm_sessions).

create() ->
    ?ETS_PREPARED_STM_SESSIONS = ets:new(?ETS_PREPARED_STM_SESSIONS, [set, named_table, protected, {read_concurrency, true}]),
    ok.

set(Identifier, Session, StatementRef) ->
    true = ets:insert(?ETS_PREPARED_STM_SESSIONS, {Identifier, {Session, StatementRef}}).

get(Identifier) ->
    case ets:lookup(?ETS_PREPARED_STM_SESSIONS, Identifier) of
        [{Identifier, Value}] ->
            Value;
        [] ->
            undefined
    end.
