
/* ==== FUN_00434df8 @ 00434df8 ==== 
 * signature: undefined __register FUN_00434df8(int * param_1, int param_2, undefined4 param_3, char param_4, char param_5)
 * body: 00434df8-00434eed
 */

void FUN_00434df8(int *param_1,int param_2,undefined4 param_3,char param_4,char param_5)

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
  code *pcStack_2c;
  code *pcStack_28;
  int local_14;
  int *local_10;
  
  local_10 = (int *)0x0;
  pcStack_28 = (code *)0x434e1a;
  piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcStack_28 = (code *)&stack0xfffffffc;
  FUN_00403178(param_1,piVar2,extraout_ECX);
  if (0 < piVar2[2]) {
    local_14 = FUN_0041030c((int)piVar2,param_2);
    iVar4 = local_14;
    if (local_14 == -1) {
      if ((char)param_3 == '\0') {
        local_14 = 0;
        iVar4 = local_14;
      }
      else {
        local_14 = piVar2[2] + -1;
        iVar4 = local_14;
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
      piVar3 = (int *)FUN_004102b0(piVar2,iVar4);
      cVar1 = FUN_00403178(piVar3,extraout_EDX,extraout_ECX_00);
      if (((cVar1 != '\0') && ((param_5 == '\0' || ((char)piVar3[0x5d] != '\0')))) &&
         ((param_4 == '\0' || ((int *)piVar3[9] == param_1)))) {
        local_10 = piVar3;
      }
    } while ((local_10 == (int *)0x0) && (iVar4 != local_14));
  }
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_00434ef5;
  pcStack_2c = (code *)0x434eed;
  FUN_00402f9c(piVar2);
  return;
}


