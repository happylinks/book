(alias
 (name   runtest)
 (deps   (:x README.md)
         (:y5 ../../examples/code/parsing-test/test.ml)
         (:y4 ../../examples/code/parsing/json.ml)
         (:y3 ../../examples/code/parsing/manual_token_type.ml)
         (:y2 ../../examples/code/parsing/parsed_example.ml)
         (:y1 ../../examples/code/parsing/prog.mli)
         (:y0 ../../examples/code/parsing/tokens.ml)
         (source_tree ../../examples/code/parsing)
         (source_tree ../../examples/code/parsing-test)
         prelude.ml)
 (action (progn
           (run ocaml-mdx test --prelude=prelude.ml --direction=to-ml %{x})
           (diff? %{x} %{x}.corrected)
           (diff? %{y5} %{y5}.corrected)
           (diff? %{y4} %{y4}.corrected)
           (diff? %{y3} %{y3}.corrected)
           (diff? %{y2} %{y2}.corrected)
           (diff? %{y1} %{y1}.corrected)
           (diff? %{y0} %{y0}.corrected))))