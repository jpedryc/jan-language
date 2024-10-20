/**
 * @file Parser for my language JAN
 * @author Jan Pedryc <jan.pedryc@gmail.com> <jan.pedryc@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "jan",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.halt_definition,
      $.label_definition,
      $.comment_definition,
      $.read_definition,
      $.push_definition,
      $.sub_definition,
      $.print_definition,
      $.jump_eq_0_definition,
      $.jump_gt_0_definition,
    ),

    halt_definition: $ => 'HALT',
    label_definition: $ => seq($.label_type, ':'),
    comment_definition: $ => seq('#', /.*/),
    read_definition: $ => 'READ',
    push_definition: $ => seq('PUSH', $.number_type),
    sub_definition: $ => 'SUB',
    print_definition: $ => seq('PRINT', $.text_type),
    jump_eq_0_definition: $ => seq('JUMP.EQ.0', $.label_type),
    jump_gt_0_definition: $ => seq('JUMP.GT.0', $.label_type),
    number_type: $ => /\d+/,
    label_type: $ => /[A-Z0-9_]+/,
    text_type: $ => seq('"', /[a-zA-Z0-9 _-]+/, '"'),
  }
});
