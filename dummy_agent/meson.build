# SPDX-License-Identifier: MIT
# Copyright (C) 2026 Interpretica Unipessoal Lda
#
# External TE agent type (see TE_EXT_REPO): a minimal Test Agent
# executable. The Builder names every agent of an external type in
# the 'agent-ext-names' option and lists its extra libraries in
# 'agent-ext-libs', both keyed by the agent directory; this file
# picks its own entries and builds one 'ta' executable per TA name.

ext_dir = 'dummy_agent'
ext_platform = get_option('agent-ext-platform')

ext_deps = []
foreach e : get_option('agent-ext-libs')
    f = e.split(':')
    if f[0] == ext_dir
        ext_deps += [ get_variable('dep_lib_static_' + f[1]) ]
    endif
endforeach

foreach e : get_option('agent-ext-names')
    f = e.split(':')
    if f[0] == ext_dir
        executable('ta', files('main.c'), install: true,
                   install_dir: join_paths(get_option('agentsdir'), f[1]),
                   c_args: [ '-DTE_AGT_PLATFORM="' + ext_platform + '"' ],
                   dependencies: ext_deps)
    endif
endforeach
