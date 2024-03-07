add_library(mdaio
    SHARED 
    rt_soft_raid0.cc
    )

set_target_properties(mdaio PROPERTIES POSITION_INDEPENDENT_CODE ON)
set_target_properties(mdaio PROPERTIES VERSION 1.0.0 SOVERSION 1)

install(TARGETS mdaio LIBRARY)
