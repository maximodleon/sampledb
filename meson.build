project('sampledb', 'c')
inc  = include_directories('include')
sources = ['src/parse.c', 'src/file.c']
lib = shared_library('lib', sources, include_directories: inc, install: true)

executable('dbview', 'src/main.c', include_directories: inc, link_with: lib)
