#SET(VITA_FLAGS "-Ofast -mcpu=cortex-a9 -mfpu=neon -ftree-vectorize -flto=jobserver -fgraphite-identity -floop-nest-optimize -floop-interchange -ftree-loop-distribution")
#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${VITA_FLAGS}")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${VITA_FLAGS}")

SET(CMAKE_CXX_STANDARD_LIBRARIES "-lpng -ljpeg -lfreetype -lz -lFLAC -lmpg123 -lpib -lSceMotion_stub -lvorbisfile -lvorbis -logg -lmikmod -lSceAudio_stub \
-lSceCtrl_stub -lSceGxm_stub -lSceGxmInternalForVsh_stub -lSceHid_stub -lSceDisplay_stub -lSceDisplayUser_stub -lSceSysmodule_stub -lSceAppMgrUser_stub \
-lSceCommonDialog_stub -lScePower_stub -lSceAppUtil_stub -lSceSharedFb_stub -lSceTouch_stub -lSDL2")

include("${DOLCESDK}/share/dolce.cmake" REQUIRED)

# Display name (under bubble in LiveArea)
set(VITA_APP_NAME "Commander Genius")
# Unique ID must be exactly 9 characters. Recommended: XXXXYYYYY where X =
# unique string of developer and Y = a unique number for this app
set(VITA_TITLEID  "CGEN00001")
# Optional version string to show in LiveArea's more info screen
string(REGEX REPLACE "^(.)\.(.)\.(.).*$" "0\\1.\\2\\3" VITA_VERSION ${CG_VERSION})
set(EXECUTABLE_NAME "CGeniusExe")

## Create Vita files
dolce_create_self(${PROJECT_NAME}.self ${EXECUTABLE_NAME})
# The FILE directive lets you add additional files to the VPK, the syntax is
# FILE src_path dst_path_in_vpk. In this case, we add the LiveArea paths.
dolce_create_vpk(${PROJECT_NAME}.vpk ${VITA_TITLEID} ${PROJECT_NAME}.self
VERSION ${VITA_VERSION}
NAME ${VITA_APP_NAME}
FILE ${CMAKE_SOURCE_DIR}/vita/sce_sys/icon0.png sce_sys/icon0.png
FILE ${CMAKE_SOURCE_DIR}/vita/sce_sys/livearea/contents/bg.png sce_sys/livearea/contents/bg.png
FILE ${CMAKE_SOURCE_DIR}/vita/sce_sys/livearea/contents/startup.png sce_sys/livearea/contents/startup.png
FILE ${CMAKE_SOURCE_DIR}/vita/sce_sys/livearea/contents/template.xml sce_sys/livearea/contents/template.xml
)
