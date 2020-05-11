#!/bin/bash

sudo apt-get -qq update

# Setting up build
sudo apt-get -qq install -y gcc g++ make cmake

# Setting up code analysis
sudo apt-get -qq install -y cppcheck python-pip
python -m pip install cpplint

# Setting up code formating
sudo apt-get -qq install -y	git-core clang-format-6.0

# Set up code coverage
sudo apt-get -qq install -y	zip gcovr ggcov lcov
