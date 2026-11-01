
/* ==== FUN_0042accc @ 0042accc ==== 
 * signature: undefined FUN_0042accc(void)
 * body: 0042accc-0042adc1
 */

void FUN_0042accc(int *param_1,int param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  int iStack_14;
  int *piStack_10;
  
  piStack_10 = (int *)0x0;
  puStack_28 = (undefined1 *)0x42acee;
  piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
  puStack_2c = &UNK_0042adc2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00402ef0(param_1,piVar2,extraout_ECX);
  if (0 < piVar2[2]) {
    iStack_14 = FUN_0040f080((int)piVar2,param_2);
    iVar4 = iStack_14;
    if (iStack_14 == -1) {
      if ((char)param_3 == '\0') {
        iStack_14 = 0;
        iVar4 = iStack_14;
      }
      else {
        iStack_14 = piVar2[2] + -1;
        iVar4 = iStack_14;
      }
    }
    do {
      if ((char)param_3 == '\0') {
        if (iVar4 == 0) {
          iVar4 = piVar2[2];
        }
        iVar4 = iVar4 + -1;
      }
      else {
        iVar4 = iVar4 + 1;
        if (iVar4 == piVar2[2]) {
          iVar4 = 0;
        }
      }
      piVar3 = (int *)FUN_0040f024(piVar2,iVar4);
      cVar1 = FUN_00402ef0(piVar3,extraout_EDX,extraout_ECX_00);
      if (((cVar1 != '\0') && ((param_5 == '\0' || ((char)piVar3[0x5d] != '\0')))) &&
         ((param_4 == '\0' || ((int *)piVar3[9] == param_1)))) {
        piStack_10 = piVar3;
      }
    } while ((piStack_10 == (int *)0x0) && (iVar4 != iStack_14));
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &UNK_0042adc9;
  puStack_2c = (undefined *)0x42adc1;
  FUN_00402d14(piVar2);
  return;
}


