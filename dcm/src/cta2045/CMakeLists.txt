set(COMPONENT_NAME CTA2045)

# add_definitions(-DEASYLOGGINGPP_H) # Turn EASYLOGGINGPP_H to true for easylogging++

add_library(${COMPONENT_NAME} STATIC
  cta2045handler.cpp
  cta2045.cpp
)

# Create ALIAS targets.
add_library( ${PROJECT_NAME}::${COMPONENT_NAME} ALIAS ${COMPONENT_NAME} )

# ----- expose/propogate headers -----
target_include_directories(${COMPONENT_NAME} PUBLIC include/)