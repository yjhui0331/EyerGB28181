include_directories (../)
include_directories (./)

add_library(
        EyerCore
        # SHARED

        EyerCore.hpp
        EyerString.hpp
        EyerLog.hpp
        EyerLog.cpp
        EyerMath.hpp
        EyerString.cpp

        EyerMat.cpp
        EyerMat4x4.cpp
        EyerMat4x1.cpp
        EyerMat3x1.cpp
        EyerMat2x1.cpp
        EyerRand.cpp
        EyerTime.cpp

        EyerLRUMap.hpp
        EyerLockQueue.hpp

        EyerTime.hpp
        EyerBuffer.cpp
        EyerBuffer.hpp
        string_ext.cpp
        string_ext.h
        EyerURLUtil.cpp
        EyerURLUtil.hpp
        EyerUtil.cpp
        EyerUtil.hpp
        EyerBufferMut.cpp
        EyerBufferMut.hpp
        EyerMD5.cpp
        EyerMD5.hpp
        EyerSockaddr.cpp
        EyerSockaddr.hpp
        EyerLogThread.cpp
        EyerLogThread.hpp
        EyerLogBean.cpp
        EyerLogBean.hpp
        EyerLogParam.cpp
        EyerLogParam.hpp
        BLOCK_TIME.cpp
        BLOCK_TIME.hpp
        EyerTable.cpp
        EyerTable.hpp
        EyerRand.hpp
        EyerObserverQueue.hpp
        EyerObserver.cpp
        EyerObserver.hpp
        EyerSubject.cpp
        EyerSubject.hpp
)

set(head_files 
        EyerString.hpp
        EyerCore.hpp
        EyerLog.hpp
        EyerMath.hpp
        EyerTime.hpp
        EyerLinkedList.hpp
        EyerLinkedEle.hpp
        EyerQueue.hpp
        EyerMap.hpp
        EyerMapEle.hpp
        EyerLockQueue.hpp
        EyerLRUMap.hpp
        EyerBuffer.hpp
        EyerBufferMut.hpp
        EyerURLUtil.hpp
        EyerUtil.hpp
        EyerMD5.hpp
        EyerSockaddr.hpp
        BLOCK_TIME.hpp
        EyerLogParam.hpp
        EyerLogBean.hpp
        EyerLogThread.hpp
        EyerTable.hpp
        EyerRand.hpp
)

INSTALL(FILES ${head_files} DESTINATION include/EyerCore)
INSTALL(
        TARGETS EyerCore
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
)
