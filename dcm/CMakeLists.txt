# Find packages go here.
find_package(Boost REQUIRED)
find_package(OpenSSL REQUIRED)

# ----- fetch flecs lib -----
FetchContent_Declare(
  flecs
  GIT_REPOSITORY https://github.com/SanderMertens/flecs.git
  GIT_TAG        v2.3.2
)

# ----- fetch EPRI's CTA2045 lib -----
FetchContent_Declare(
  cea2045
  GIT_REPOSITORY https://github.com/epri-dev/CTA-2045-UCM-CPP-Library.git
  GIT_TAG        master
)
FetchContent_MakeAvailable(cea2045)

# project dirs
add_subdirectory(src)
add_subdirectory(tests)