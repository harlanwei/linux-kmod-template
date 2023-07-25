#!/bin/bash

fatal () {
    echo "$1"
    exit 1
}

module_name=$1
dist_path=$2
target_files=(Makefile main.c common.h)
os_name=$(uname)

if [[ -z "$dist_path" ]] || [[ -z "$module_name" ]]; then
    fatal "Usage: ./init <module's name> <dist path>"
fi

mkdir -p "$dist_path"
cp -p ${target_files[@]} "$dist_path"/.
cd $dist_path

if [[ "$os_name" == "Darwin" ]]; then
    sed -i '' -e "s/!!NAME!!/$module_name/g" ${target_files[@]}
else
    sed -i -e "s/!!NAME!!/$module_name/g" ${target_files[@]}
fi

git init
echo "# $module_name" > README.md
