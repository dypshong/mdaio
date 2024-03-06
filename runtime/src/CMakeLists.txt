add_library(mdio
    SHARED 
    rt_soft_raid0.cc
    )

set_target_properties(mdio PROPERTIES POSITION_INDEPENDENT_CODE ON)
set_target_properties(mdio PROPERTIES VERSION 1.0.0 SOVERSION 1)

install(TARGETS mdio LIBRARY)
