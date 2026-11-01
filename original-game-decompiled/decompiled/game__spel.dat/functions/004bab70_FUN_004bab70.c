
/* ==== FUN_004bab70 @ 004bab70 ==== 
 * signature: undefined __cdecl FUN_004bab70(uint param_1)
 * body: 004bab70-004babfd;004bac01-004bacaf;004bacb3-004bacd7;004bacdb-004bacfd;004bad01-004bad24;004bad28-004bad67;004bad6b-004bad96;004bad9a-004badbf;004badc3-004badfb;004badff-004bae00
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004babfe-004bac00 004bacb0-004bacb2 004bacd8-004bacda 004bacfe-004bad00 004bad25-004bad27 004bad68-004bad6a 004bad97-004bad99 004badc0-004badc2 004badfc-004badfe
 */

void __cdecl FUN_004bab70(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0073b21c != 0) {
    if (DAT_0073b21c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b210);
    }
    if (DAT_0073b21c != 0) {
      FUN_0054b339(DAT_0073b220);
      DAT_0073b21c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  DAT_0073b210 = operator_new(param_1 * 4);
  DAT_0073b214 = param_1;
  DAT_0073b218 = 0;
  DAT_0073b220 = operator_new(param_1);
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  DAT_0073b21c = 1;
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      iVar1 = iVar2 + 1;
      *(undefined1 *)((int)DAT_0073b220 + iVar2) = 0;
      iVar2 = iVar1;
    } while (iVar1 < (int)param_1);
  }
  DAT_005b1ba8 = FUN_004baf10();
  DAT_005b1bac = FUN_004baf10();
  if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((DAT_005b1ba8 < 0) || ((int)DAT_0073b214 <= DAT_005b1ba8)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)((int)DAT_0073b220 + DAT_005b1ba8) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  if (DAT_0073b4cc != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  if (DAT_0073b50d != DAT_005b1ba8) {
    DAT_0073b50d = DAT_005b1ba8;
    if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((DAT_005b1ba8 < 0) || ((int)DAT_0073b214 <= DAT_005b1ba8)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)((int)DAT_0073b220 + DAT_005b1ba8) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar2 = (**(code **)(*DAT_0073b4b4 + 100))
                      (DAT_0073b4b4,1,
                       *(undefined4 *)(*(int *)((int)DAT_0073b210 + DAT_005b1ba8 * 4) + 0x50));
    if (iVar2 != 0) {
      FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____MATERIAL__error_settin_005b1bcc);
    }
  }
  return;
}


