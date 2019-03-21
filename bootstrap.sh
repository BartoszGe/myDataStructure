#!/bin/sh -e
ver=2.0.12
hget() {
	if [ -x $(command -v curl) ]; then
		curl -o $2 $1
	elif [ -x $(command -v wget) ]; then
		wget -O $2 $1
	else
		echo "http get program not found"
	fi
}

hget https://waf.io/waf-$ver waf
chmod +x waf

