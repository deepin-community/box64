file(REMOVE_RECURSE
  "libdynarec.a"
  "libdynarec.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang ASM C)
  include(CMakeFiles/dynarec.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
