project('sampledb tests', 'c')
inc  = include_directories('../include', '../munit')
sources = ['../src/parse.c', '../src/file.c', '../munit/munit.c']
lib = shared_library('lib', sources, include_directories: inc, install: true)

executable('tests', './main.c', include_directories: inc, link_with: lib)
