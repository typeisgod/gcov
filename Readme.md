# LCOV/GCOV branch coverage reports

LCOV/GCOV are reporting weird branch coverage (conditional coverage) results when used with c++.

We suspect these weird branch reports come from internal exception wrappers/handlers. But shouldn't interfere with "high level" coverage reports.

you can see my manual at https://confluence.momenta.works/pages/viewpage.action?pageId=151864947



# Reproduce

## Dependencies

You need to install gcov, lcov and genhtml on your system.

Your g++ needs to support "--coverage".

## Running

1. Clone the repo
2. Navigate into your cloned repo
3. make
4. Inspect the coverage report in "./generated-coverage/index.html"
