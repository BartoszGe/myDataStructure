#!/usr/bin/env python

APPNAME = 'myDataStructure'
VERSION = '0.0.1'

top = '.'
out = 'build'

def options(opt):
    opt.load('compiler_c')

def configure(cfg):
    cfg.load('compiler_c')

def build(bld):
    bld.recurse('linkedList')
   
    
    
