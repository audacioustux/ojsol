#!/usr/bin/env bash

set -eax

# clean up
git clean -Xdf --exclude='!**/*.env'
