#!/bin/bash

set -o errexit
set -o verbose
set -o pipefail

if [[ ${TRAVIS_BRANCH} == "master" ]] &&
    [[ ${TRAVIS_PULL_REQUEST} == "false" ]]; then
  mkdir -p $(dirname ${DOCKER_CACHE_FILE});
  docker save $(docker history -q attiny85sim:${UBUNTU_RELEASE} |
      grep -v '<missing>') | gzip > ${DOCKER_CACHE_FILE};
fi
