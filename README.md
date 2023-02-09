# ojsol

``` bash
bazel run @hedron_compile_commands//:refresh_all
ibazel run --test_output=summary //CSES:tests
### test specific file
ibazel run --test_output=summary //CSES:tests -- --gtest_filter=RangeQueriesTest
```
