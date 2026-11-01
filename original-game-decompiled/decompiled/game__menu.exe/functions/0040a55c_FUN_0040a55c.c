
/* ==== FUN_0040a55c @ 0040a55c ==== 
 * signature: undefined __register FUN_0040a55c(int param_1, int * param_2, undefined * param_3)
 * body: 0040a55c-0040a5d4
 */

void FUN_0040a55c(int param_1,int *param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar3;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined *local_c;
  int local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_c = (undefined *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != (undefined *)0x0) {
    FUN_0040a4a4(param_1,param_2);
    ppuVar3 = &local_c;
    uVar1 = FUN_00403edc((int)param_3);
    FUN_004040e4(local_8,*param_2,uVar1,(int *)ppuVar3);
    iVar2 = FUN_00408364(param_3,local_c);
    if (iVar2 == 0) {
      iVar2 = FUN_00403edc((int)param_3);
      *param_2 = *param_2 + iVar2;
    }
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0040a5dc;
  pcStack_20 = (code *)0x40a5d4;
  FUN_00403c5c((int *)&local_c);
  return;
}


