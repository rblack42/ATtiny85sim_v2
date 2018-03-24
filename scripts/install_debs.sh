#!/bin/sh

set -o errexit
set -o verbose

sudo apt-get update
sudo apt-get install -y \
    g++ \
    git \
    python-sphinx

