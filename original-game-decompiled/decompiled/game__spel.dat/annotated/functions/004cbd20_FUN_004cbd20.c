
/* ==== FUN_004cbd20 @ 004cbd20 ==== 
 * signature: undefined4 __cdecl FUN_004cbd20(int param_1)
 * body: 004cbd20-004cbd4b;004cbd4f-004cbd76;004cbd7f-004cbd9c;004cbda5-004cbdd7;004cbde5-004cbdff;004cbe03-004cbf06;004cbf0a-004cbf20
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cbd4c-004cbd4e 004cbd77-004cbd7e 004cbd9d-004cbda4 004cbdd8-004cbde4 004cbe00-004cbe02 004cbf07-004cbf09
 */

undefined4 __cdecl FUN_004cbd20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  HLOCAL pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uStack_8;
  uint uStack_4;
  
  if ((param_1 < 0) || (DAT_005b5ea8 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____index_out_of_mem_image_a_005b5ca8);
  }
  iVar7 = param_1 * 0x20;
  if (*(int *)(iVar7 + 8 + DAT_00740d44) < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____illegal_mem_xsize____d___005b5f90);
  }
  if (0 < *(int *)(iVar7 + 0xc + DAT_00740d44)) {
    iVar6 = *(int *)(iVar7 + 0xc + DAT_00740d44);
    iVar1 = *(int *)(iVar7 + 8 + DAT_00740d44);
    iVar2 = *(int *)(iVar7 + 0x18 + DAT_00740d44);
    if (iVar2 == 2) {
      if (DAT_00740d38 == 0) {
        uVar5 = FUN_004c4a80(iVar1,iVar6);
        *(undefined4 *)(iVar7 + 4 + DAT_00740d44) = uVar5;
        if (*(int *)(iVar7 + 4 + DAT_00740d44) == 0) {
          return 2000;
        }
      }
      else {
        uVar5 = FUN_004c4a80(iVar1,iVar6);
        *(undefined4 *)(iVar7 + 4 + DAT_00740d44) = uVar5;
        if (DAT_00740d40 == 0) {
          return 2000;
        }
      }
      uStack_8 = DAT_005b3940;
      if (DAT_007409cc != 0) {
        if (DAT_007409cc == 4) {
          uStack_8 = FUN_004c81b0(DAT_007408f0,0x18);
        }
        else {
          uStack_8 = FUN_004c81b0(DAT_005b3940,8);
        }
      }
      piVar3 = *(int **)(iVar7 + 4 + DAT_00740d44);
      uStack_4 = uStack_8;
      iVar6 = (**(code **)(*piVar3 + 0x74))(piVar3,8,&uStack_8);
      if (iVar6 != 0) {
        hardware(iVar6);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____failed_to_set_color_key_005b4458);
      }
    }
    else {
      if (iVar2 != 4) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____illegal_alloc_type__d_f_005b5f30);
      }
      if (iVar6 * iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____error_illegal_mem_image_005b5efc);
      }
      pvVar4 = LocalAlloc(0x40,iVar6 * iVar1);
      *(HLOCAL *)(iVar7 + DAT_00740d44) = pvVar4;
      if (*(int *)(iVar7 + DAT_00740d44) == 0) {
        return 2000;
      }
    }
    *(undefined4 *)(iVar7 + 0x1c + DAT_00740d44) = 1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____illegal_mem_ysize____d___005b5f64);
}


