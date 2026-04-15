# tsf-dummy

A minimal external module for the Test Environment (TE).
It exists to test and demonstrate the `TE_EXT_REPO` machinery of the
TE Builder.

Components:

- `tapi_dummy` — engine-side TAPI (shared library) with one function,
  `tapi_dummy_greeting()`;
- `dummy_agent` — external Test Agent type: a real executable linked
  with TE libraries (not an RCF agent).

## Usage

Declare the repository in an external libraries catalog and pass it to
`dispatcher.sh --ext-libs=<catalog.yml>`:

```yaml
repositories:
  - name: tsf_dummy
    url: https://github.com/interpretica-io/tsf-dummy.git
    ref: v1.0.0
    libs:
      - tapi_dummy
    agents:
      - dummy_agent
```

Bind the components in `builder.conf`:

```
TE_EXT_REPO_USE([tsf_dummy], [], [tapi_dummy])
TE_TA_TYPE([dummy], [], [dummy_agent], [], [], [], [], [tools])
```

Requires TE with `TE_EXT_REPO` support.
