# Piscine tester status

Release-hardening validation of every structurally selectable Piscine placement. All probes ran in isolated directories under `/tmp`; no mutation fixture was copied into a user workspace in the repository.

| Week | Physical pool | Exercise | Expected filename | Correct | Missing | Compile error | Generic wrong | Semantic mutation | Timeout | Process cleanup | Selectable | Notes |
|---:|---:|---|---|---|---|---|---|---|---|---|---|---|
| 02 | 0 | ft_strlen | `ft_strlen.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 0 | ft_strcpy | `ft_strcpy.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 0 | repeat_alpha | `repeat_alpha.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 4 | ft_strdup | `ft_strdup.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 4 | ft_atoi | `ft_atoi.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 4 | inter | `inter.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 7 | is_power_of_2 | `is_power_of_2.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 7 | wdmatch | `wdmatch.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 7 | max | `max.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 7 | print_bits | `print_bits.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 3 | rev_print | `rev_print.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 3 | rot_13 | `rot_13.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 3 | rotone | `rotone.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 2 | ft_putstr | `ft_putstr.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 2 | first_word | `first_word.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 2 | ft_swap | `ft_swap.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 5 | reverse_bits | `reverse_bits.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 5 | swap_bits | `swap_bits.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 5 | union | `union.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 5 | last_word | `last_word.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 1 | search_and_replace | `search_and_replace.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 1 | ulstr | `ulstr.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 6 | do_op | `*.c, *.h` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 6 | ft_strrev | `ft_strrev.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 6 | alpha_mirror | `alpha_mirror.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 02 | 6 | ft_strcmp | `ft_strcmp.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 0 | aff_a | `aff_a.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 0 | ft_countdown | `ft_countdown.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 4 | search_and_replace | `search_and_replace.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 4 | rotone | `rotone.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 7 | wdmatch | `wdmatch.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 7 | union | `union.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 13 | is_power_of_2 | `is_power_of_2.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 13 | ft_strrev | `ft_strrev.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 14 | max | `max.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 14 | only_a | `only_a.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 15 | rstr_capitalizer | `rstr_capitalizer.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 15 | fprime | `fprime.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 3 | rev_print | `rev_print.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 3 | rot_13 | `rot_13.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 12 | ft_strdup | `ft_strdup.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 12 | ft_strcmp | `ft_strcmp.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 2 | ft_strlen | `ft_strlen.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 2 | repeat_alpha | `repeat_alpha.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 9 | reverse_bits | `reverse_bits.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 9 | swap_bits | `swap_bits.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 11 | ft_atoi | `ft_atoi.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 11 | ft_swap | `ft_swap.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 5 | do_op | `*.c, *.h` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 5 | ulstr | `ulstr.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 1 | first_word | `first_word.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 1 | ft_print_numbers | `ft_print_numbers.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 6 | inter | `inter.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 6 | last_word | `last_word.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 8 | alpha_mirror | `alpha_mirror.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 8 | print_bits | `print_bits.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 16 | rostring | `rostring.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 16 | tab_mult | `tab_mult.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 10 | ft_strcpy | `ft_strcpy.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 04 | 10 | ft_putstr | `ft_putstr.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 0 | aff_a | `aff_a.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 0 | ft_countdown | `ft_countdown.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 4 | search_and_replace | `search_and_replace.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 4 | rotone | `rotone.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 7 | wdmatch | `wdmatch.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 7 | alpha_mirror | `alpha_mirror.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 3 | rev_print | `rev_print.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 3 | rot_13 | `rot_13.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 2 | ft_strlen | `ft_strlen.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 2 | repeat_alpha | `repeat_alpha.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 9 | expand_str | `expand_str.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 9 | paramsum | `paramsum.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 5 | inter | `inter.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 5 | ulstr | `ulstr.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 1 | do_op | `*.c, *.h` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 1 | ft_strrev | `ft_strrev.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 1 | wdmatch | `wdmatch.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 1 | max | `max.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 1 | first_word | `first_word.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 1 | ft_print_numbers | `ft_print_numbers.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 6 | union | `union.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 6 | last_word | `last_word.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 8 | add_prime_sum | `add_prime_sum.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 03 | 8 | epur_str | `epur_str.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 0 | aff_a | `aff_a.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 0 | ft_countdown | `ft_countdown.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 0 | ft_print_numbers | `ft_print_numbers.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 4 | ft_strlen | `ft_strlen.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 4 | ft_strcpy | `ft_strcpy.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 7 | rev_print | `rev_print.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 7 | rot_13 | `rot_13.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 7 | rotone | `rotone.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 3 | only_a | `only_a.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 3 | maff_revalpha | `maff_revalpha.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 3 | only_z | `only_z.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 2 | aff_last_param | `aff_last_param.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 2 | aff_first_param | `aff_first_param.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 2 | aff_z | `aff_z.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 5 | search_and_replace | `search_and_replace.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 5 | ulstr | `ulstr.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 5 | repeat_alpha | `repeat_alpha.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 1 | maff_alpha | `maff_alpha.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 1 | hello | `hello.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 6 | ft_putstr | `ft_putstr.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 6 | first_word | `first_word.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |
| 01 | 6 | ft_swap | `ft_swap.c` | pass | rejected | rejected | rejected | rejected | rejected | clean | yes | reference + isolated mutation probes |

## Excluded placements

| Week | Physical pool | Exercise | Selectable | Reason |
|---:|---:|---|---|---|
| 03 | 3 | expand_str | no | no meaningful tester at this placement |
| 03 | 3 | ft_atoi_base | no | no meaningful tester at this placement |
| 03 | 3 | ft_range | no | no meaningful tester at this placement |
| 03 | 3 | lcm | no | no meaningful tester at this placement |
| 03 | 3 | paramsum | no | no meaningful tester at this placement |
| 03 | 3 | str_capitalizer | no | no meaningful tester at this placement |
| 03 | 3 | tab_mult | no | no meaningful tester at this placement |

Complete later placements of `expand_str`, `paramsum`, and `tab_mult` remain selectable.

## Probe definitions

- **Correct:** bundled internal reference submitted through the documented exercise directory.
- **Missing:** no submitted source.
- **Compile error:** invalid C source.
- **Generic wrong:** a trivial implementation that does no exercise work.
- **Semantic mutation:** a compiling, behavior-specific mutation such as skipped traversal, hardcoded output, identity bit operation, borrowed `ft_strdup` storage, no-op swap/copy, or even-number-only power detection.
- **Timeout:** a compiling infinite-loop implementation with the exercise’s required entry point.
- **Process cleanup:** after timeout batches, the requested `ps` pipeline returned no `final`, `source`, or grading tester process.
