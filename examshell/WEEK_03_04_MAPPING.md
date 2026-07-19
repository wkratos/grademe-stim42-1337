# Week 03/04 exercise mapping

This mapping was prepared before importing exercises. Existing exercises are reused from
the hidden Piscine exercise bank; new higher-level exercises come from the read-only
`C-Exam-Practice-1337-42` repository. Every selected entry has a complete `subject.en.txt`, a
known submitted filename, and either an existing real tester or a deterministic tester
that compiles and compares the submission with the hidden reference implementation.

| Week | Engine level(s) | Exercises | Source | Submitted file/type | Placement and validation |
|---|---:|---|---|---|---|
| 03 | 0-2 | aff_a, ft_countdown, ft_print_numbers, first_word, fizzbuzz, ft_strlen | source levels 0-1 / existing bank | named `.c`, programs except `ft_strlen` | introductory output, argument and basic function work; complete subjects; testable; existing duplicates are intentionally reused as the established bank, not copied into the same week level |
| 03 | 3-5 | repeat_alpha, rev_print, rot_13, rotone, search_and_replace, ulstr | source level 1 / existing bank | named `.c`, programs | simple string traversal and transformations; complete subjects and real existing testers |
| 03 | 6-7 | inter, last_word, union, wdmatch | source level 2 / existing bank | named `.c`, programs | multi-string/word parsing; complete subjects and real existing testers |
| 03 | 8 | add_prime_sum, epur_str | `03__add_prime_sum`, `03__epur_str` | named `.c`, programs | arithmetic and whitespace parsing; complete subjects and deterministic output tests |
| 03 | 9 | expand_str, paramsum | `03__expand_str`, `03__paramsum` | named `.c`, programs | more involved formatting/argument handling; complete subjects and deterministic output tests |
| 04 | 0-3 | aff_a, ft_countdown, ft_print_numbers, first_word, fizzbuzz, repeat_alpha, rev_print, rot_13 | source levels 0-1 / existing bank | named `.c`, programs | final-exam warm-up progression; complete subjects and real existing testers |
| 04 | 4-9 | rotone, search_and_replace, ulstr, do_op, inter, last_word, union, wdmatch, alpha_mirror, print_bits, reverse_bits, swap_bits | source levels 1-2 / existing bank | named `.c`, program/function | progressively broader string, arithmetic and bit operations; complete subjects and real existing testers |
| 04 | 10-13 | add_prime_sum, epur_str, expand_str, paramsum, pgcd, print_hex, str_capitalizer, tab_mult | source level 3 | named `.c`, programs | parsing, number theory and formatting; complete subjects; deterministic testers can be created |
| 04 | 14-16 | rstr_capitalizer, fprime, rev_wstr, rostring, brackets, rpn_calc | source levels 3-5 | named `.c` or `*.c`, programs | advanced parsing, factorization and stack/state handling; complete subjects; deterministic testers can be created |

No solution is copied to `attachment/`, `subjects/`, or `rendu/`. Reference C files stay
inside `.subjects` and are copied only into `.system/grading` by the existing engine.
