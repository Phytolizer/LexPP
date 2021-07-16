project('LexPP', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++20']
)

fmtdep = dependency('fmt')

exe = executable('lexpp', 'lexpp.cpp',
  install : true, 
  dependencies : fmtdep
)
