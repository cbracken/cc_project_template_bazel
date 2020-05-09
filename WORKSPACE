workspace(name = "cc_template")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# abseil-cpp
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/b832dce8489ef7b6231384909fd9b68d5a5ff2b7.zip"],
  strip_prefix = "abseil-cpp-b832dce8489ef7b6231384909fd9b68d5a5ff2b7",
  sha256 = "6b54129c89707e66d1c33705501a87cb1659223e7e0d4e27d923956065fac6d9",
)

# Google Test
http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/703bd9caab50b139428cea1aaff9974ebee5742e.zip"],
  strip_prefix = "googletest-703bd9caab50b139428cea1aaff9974ebee5742e",
  sha256 = "2db427be8b258ad401177c411c2a7c2f6bc78548a04f1a23576cc62616d9cd38",
)
