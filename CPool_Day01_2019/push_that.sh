#!/bin/sh
git add --force *
git commit -m "$1"
git push --force origin master
