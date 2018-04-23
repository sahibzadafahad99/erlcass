-module(erlcass_stm_cache).

-export([
    create/0,
    set/2,
    find/1,
    to_list/0
]).

-define(ETS_PREPARED_STM_CACHE, erlcass_ets_prepared_stm_cache).

create() ->
    ?ETS_PREPARED_STM_CACHE = ets:new(?ETS_PREPARED_STM_CACHE, [set, named_table, public, {read_concurrency, true}]),
    ok.

set(Identifier, Query) ->
    true = ets:insert(?ETS_PREPARED_STM_CACHE, {Identifier, Query}).

find(Identifier) ->
    case ets:lookup(?ETS_PREPARED_STM_CACHE, Identifier) of
        [{Identifier, _Query}] ->
            true;
        [] ->
            false
    end.

to_list() ->
    ets:tab2list(?ETS_PREPARED_STM_CACHE).