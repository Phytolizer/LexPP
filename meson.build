project('LexPP', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++2a']
)
cmake = import('cmake')

opt_var = cmake.subproject_options()

opt_var.add_cmake_defines({'CMAKE_BUILD_TYPE': 'Debug'})

fmt = cmake.subproject('fmt', options : opt_var)
fmtdep = fmt.dependency('fmt')

exe = executable('lexpp', ['lexpp.cpp'],
  install : true, 
  dependencies : [fmtdep]
)
