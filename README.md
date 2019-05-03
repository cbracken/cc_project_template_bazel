# ProjectTemplate

A [Bazel](http://bazel.build) and
[googletest](https://github.com/google/googletest)-based C++ project template.

## Prerequisites

To build, you'll need [Bazel](http://bazel.build) and a clang build toolchain
installed on your system.

## Obtaining the source

First, clone the repo:
```shell
git clone git@gitlab.com:cbracken/cc_project_template_bazel.git
```

## Building and running

### Unit tests

To build the unit tests, run:

```shell
bazel build //foobar:foobar_test
```

To build and run the unit tests, run:

```shell
bazel test //foobar:foobar_test
```

### Executable binary

To build and run the binary:

```shell
bazel build //foobar:foobar
./bazel-bin/foobar/foobar
```
