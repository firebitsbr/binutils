#source: attr-merge-div-2.s
#source: attr-merge-div-2.s
#as:
#ld: -r
#readcgc: -A
# This test is only valid on CGC based ports.
# not-target: *-*-*coff *-*-pe *-*-wince *-*-*aout* *-*-netbsd *-*-riscix*

Attribute Section: aeabi
File Attributes
  Tag_ARM_ISA_use: Yes
  Tag_THUMB_ISA_use: Thumb-1
  Tag_DIV_use: Allowed in v7-A with integer division extension
