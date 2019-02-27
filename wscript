#!/usr/bin/env python

APPNAME = 'myDataStructure'
VERSION = '0.0.1'

top = '.'

out = 'build'

def options(opt):
    opt.load('compiler_cxx')

def configure(cfg):
    cfg.load('compiler_cxx')

def build(bld):
    bld.recurse('linkedList')
   
    
    
