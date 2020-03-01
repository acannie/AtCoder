### Google Test Setup
### cf. https://qiita.com/ktrmnm/items/667a7b7c93cd3fb78419
include(cmake/download/DownloadProject.cmake)
download_project(
    PROJ googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG master
    UPDATE_DISCONNECTED 1
)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})