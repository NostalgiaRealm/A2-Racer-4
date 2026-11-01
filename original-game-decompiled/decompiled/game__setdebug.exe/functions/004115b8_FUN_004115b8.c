
/* ==== FUN_004115b8 @ 004115b8 ==== 
 * signature: undefined __register FUN_004115b8(int param_1, char * param_2)
 * body: 004115b8-00411652;0041165a-00411660
 */

void FUN_004115b8(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  if (DAT_00447628 == 0) {
    return;
  }
  puStack_1c = (undefined1 *)0x4115de;
  piVar1 = (int *)FUN_0040f38c(DAT_00447628);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = piVar1[2] + -1;
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      piVar2 = (int *)FUN_0040f024(piVar1,iVar4);
      if ((param_1 == 0) || (piVar2[2] == param_1)) {
        if (param_2 != (char *)0x0) {
          uVar3 = FUN_00407ad0(param_2,(char *)piVar2[4]);
          if ((char)uVar3 == '\0') goto LAB_00411635;
        }
        FUN_0040ef14(piVar1,iVar4);
        FUN_00402d14(piVar2);
      }
LAB_00411635:
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x41165a;
  pcStack_20 = (code *)0x411652;
  FUN_0040f3f0(DAT_00447628);
  return;
}


