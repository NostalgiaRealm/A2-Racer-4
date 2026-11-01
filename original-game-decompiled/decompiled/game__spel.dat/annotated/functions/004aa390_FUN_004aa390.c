
/* ==== FUN_004aa390 @ 004aa390 ==== 
 * signature: undefined __cdecl FUN_004aa390(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * body: 004aa390-004aa3c6;004aa3ca-004aa43f;004aa443-004aa49c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aa3c7-004aa3c9 004aa440-004aa442
 */

void __cdecl
FUN_004aa390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xf0;
  iVar1 = *(int *)(iVar3 + 0xac + DAT_00715e50);
  if (0xb < iVar1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____No_more_sub_objects_ava_005affc8);
  }
  iVar2 = FUN_004b52c0(param_4,param_5,param_6,param_7,param_8,param_9,param_2,param_3,FUN_004b5620)
  ;
  if ((-1 < iVar1) && (iVar1 < 0xc)) {
    *(int *)(iVar3 + DAT_00715e50 + 0x7c + iVar1 * 4) = iVar2;
    iVar2 = iVar2 * 0xa9;
    *(undefined4 *)(iVar2 + 0xa1 + DAT_0073b0d0) = 2;
    *(int *)(iVar2 + 0xc + DAT_0073b0d0) = param_1;
    *(int *)(iVar3 + 0xac + DAT_00715e50) = *(int *)(iVar3 + 0xac + DAT_00715e50) + 1;
    FUN_004b5770(iVar2 + DAT_0073b0d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____illegal_sub_object_inde_005afcdc);
}


