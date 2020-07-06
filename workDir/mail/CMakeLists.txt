set(mail_SRCS
    mail.cpp mail_class.cpp mail_class.h
)

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/exe)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/exe)


add_executable(mail
    ${mail_SRCS}
)

target_link_libraries(mail
    SimpleMail2Qt5::Core
    Qt5::Core
)
