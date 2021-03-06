/* VxWorks support for CGC
   Copyright 2005, 2006, 2007 Free Software Foundation, Inc.

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston,
   MA 02111-1307, USA.  */

#include "cgc/common.h"
#include "cgc/internal.h"

bfd_boolean cgc_vxworks_add_symbol_hook
  (bfd *, struct bfd_link_info *, Cgc_Internal_Sym *, const char **,
   flagword *, asection **, bfd_vma *);
bfd_boolean cgc_vxworks_link_output_symbol_hook
  (struct bfd_link_info *, const char *name, Cgc_Internal_Sym *,
   asection *, struct cgc_link_hash_entry *);
bfd_boolean cgc_vxworks_emit_relocs
  (bfd *, asection *, Cgc_Internal_Shdr *, Cgc_Internal_Rela *,
   struct cgc_link_hash_entry **);
void cgc_vxworks_final_write_processing (bfd *, bfd_boolean);
bfd_boolean cgc_vxworks_create_dynamic_sections
  (bfd *, struct bfd_link_info *, asection **);
bfd_boolean cgc_vxworks_add_dynamic_entries (bfd *, struct bfd_link_info *);
bfd_boolean cgc_vxworks_finish_dynamic_entry (bfd *, Cgc_Internal_Dyn *);

