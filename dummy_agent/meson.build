# SPDX-License-Identifier: Apache-2.0
# Copyright (C) 2026 Interpretica Unipessoal Lda
#
# External TE agent type (see TE_EXT_REPO): a minimal Test Agent
# executable. The Builder describes every agent of an external type
# in the 'agent-ext-info' meson option; this file finds its own
# entries and builds one 'ta' executable per TA name.

ext_dir = 'dummy_agent'

foreach info : get_option('agent-ext-info')
    f = info.split(':')
    if f[0] == ext_dir
        ext_name = f[1]
        ext_platform = f[2]
        ext_libs = []
        if f.length() > 3 and f[3] != ''
            ext_libs = f[3].split('+')
        endif

        ext_deps = []
        foreach l : ext_libs
            ext_deps += [ get_variable('dep_lib_static_' + l) ]
        endforeach

        executable('ta', files('main.c'), install: true,
                   install_dir: join_paths(get_option('agentsdir'), ext_name),
                   c_args: [ '-DTE_AGT_PLATFORM="' + ext_platform + '"' ],
                   dependencies: ext_deps)
    endif
endforeach
