
/* ==== FUN_004bd070 @ 004bd070 ==== 
 * signature: undefined __cdecl FUN_004bd070(int param_1, int param_2)
 * body: 004bd070-004bd09c;004bd0a0-004bd0cd;004bd0d1-004bd0f6;004bd0fa-004bd146;004bd14a-004bd171;004bd175-004bd19a;004bd19e-004bd1f5;004bd1f9-004bd259;004bd262-004bd28f;004bd293-004bd2bb;004bd2c5-004bd2e9;004bd2f3-004bd33e;004bd348-004bd36a;004bd36e-004bd393;004bd397-004bd441
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bd09d-004bd09f 004bd0ce-004bd0d0 004bd0f7-004bd0f9 004bd147-004bd149 004bd172-004bd174 004bd19b-004bd19d 004bd1f6-004bd1f8 004bd25a-004bd261 004bd290-004bd292 004bd2bc-004bd2c4 004bd2ea-004bd2f2 004bd33f-004bd347 004bd36b-004bd36d 004bd394-004bd396
 */

void __cdecl FUN_004bd070(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *this;
  
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  if (*(int *)(DAT_0073b1b0 + 0x44 + param_2 * 0x48) == 0) {
    if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((DAT_005b1ba8 < 0) || (DAT_0073b214 <= DAT_005b1ba8)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b220 + DAT_005b1ba8) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar2 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar2 + 0x60) = param_2;
    puVar1 = (undefined4 *)FUN_004ba990(&DAT_0073b1b0,param_2);
    *(undefined4 *)(iVar2 + 0x48) = *puVar1;
    *(undefined4 *)(iVar2 + 0x58) = 1;
    if (*(int *)(iVar2 + 0x5c) == 1) {
      FUN_00440430(iVar2);
    }
    if (DAT_0073b4cc != 1) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____device_was_not_initiali_005b106c);
    }
    if (DAT_0073b4ec != param_2) {
      DAT_0073b4ec = param_2;
      iVar2 = *DAT_0073b4b4;
      puVar1 = (undefined4 *)FUN_004ba990(&DAT_0073b1b0,param_2);
      iVar2 = (**(code **)(iVar2 + 0x5c))(DAT_0073b4b4,1,*puVar1);
      if (iVar2 != 0) {
        FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
  }
  else {
    if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    if (*(int *)(param_1 * 0xac + 0xa8 + DAT_0073b5c8) != param_2) {
      if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
      }
      if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      FUN_004bdcd0((void *)(param_1 * 0xac + DAT_0073b5c8),param_2);
      iVar2 = FUN_004b6080(&DAT_0073b5c8,param_1);
      *(int *)(iVar2 + 0xa8) = param_2;
    }
  }
  piVar3 = (int *)FUN_004b6080(&DAT_0073b5c8,param_1);
  FUN_004be340(piVar3);
  if (DAT_0073b610 != 0) {
    iVar2 = FUN_004ba990(&DAT_0073b1b0,param_2);
    if (*(int *)(iVar2 + 0x44) != 0) {
      this = (void *)FUN_004b6080(&DAT_0073b5c8,param_1);
      FUN_004bdff0(this,param_2);
      iVar2 = FUN_004b6080(&DAT_0073b5c8,param_1);
      *(undefined4 *)(iVar2 + 0xa8) = 0xffffffff;
    }
  }
  return;
}


