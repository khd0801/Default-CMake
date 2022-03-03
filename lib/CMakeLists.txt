# 현재 디렉토리에 있는 모든 파일을 SRC_FILES 변수에 추가한다.
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(TestLib STATIC ${SRC_FILES})

# TestLib 의 include 경로 지정
target_include_directories(TestLib PUBLIC ${CMAKE_SOURCE_DIR}/include)

# TestLib 의 컴파일 옵션 지정
target_compile_options(TestLib PRIVATE -Wall -Werror)

# TestLib 를 C++ 17 로 컴파일
target_compile_features(TestLib PRIVATE cxx_std_17)
