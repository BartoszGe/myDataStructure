#!/usr/bin/env python

APPNAME = 'myDataStructure'
VERSION = '0.0.1'

top = '.'

out = 'build'

from waflib.Tools.compiler_cxx import cxx_compiler
cxx_compiler['linux'] = ['gxx', 'clangxx']

def options(opt):
    opt.load('compiler_cxx' )

def configure(conf):
    conf.env.LINKFLAGS = ['-fsanitize=address']
    conf.env.CXXFLAGS = ['-fsanitize=address']
    conf.load('compiler_cxx')
    conf.check_cxx(lib='pthread')

def build(bld):
    bld.stlib(
        features='cxx',
        source=['gtest/src/gtest-all.cc'],
        target='gtest',
        includes=['gtest/include', 'gtest'],
        export_includes=['gtest/include'],
        use=['PTHREAD'])

    bld.recurse('linkedList')


