cc_library(
    name = "foolib",
    srcs = [
        "bar.cc",
        "foo.cc",
    ],
    hdrs = [
        "bar.h",
        "foo.h",
    ],
    visibility = ["//foobar:__pkg__"],
)

cc_binary(
    name = "foobar",
    srcs = ["main.cc"],
    deps = [":foolib"],
)

cc_test(
    name = "foobar_test",
    srcs = [
        "bar_test.cc",
        "foo_test.cc",
    ],
    deps = [
        "@googletest//:gtest_main",
        ":foolib",
    ],
)

#executable("foo_tests") {
#  testonly = true
#
#  sources = [
#    "bar_test.cc",
#    "foo_test.cc",
#  ]
#  deps = [
#    ":foo_srcs",
#    "//third_party/googletest:gtest",
#    "//third_party/googletest:gtest_main",
#  ]
#}
