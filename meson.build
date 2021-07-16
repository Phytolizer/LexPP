project('LexPP', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

fmtdep = dependency('fmt')

exe = executable('lexpp', 'lexpp.cpp',
  install : true, dependencies : fmtdep)
