#!/bin/bash

set -o errexit
set -o verbose
set -o pipefail

if [ -f ${DOCKER_CACHE_FILE} ]; then
  gunzip -c ${DOCKER_CACHE_FILE} | docker load;
fi
