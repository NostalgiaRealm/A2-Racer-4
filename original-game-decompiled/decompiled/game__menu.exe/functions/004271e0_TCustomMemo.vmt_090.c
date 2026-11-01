
/* ==== TCustomMemo.vmt_090 @ 004271e0 ==== 
 * signature: undefined __register TCustomMemo.vmt_090(int * param_1, int * param_2)
 * body: 004271e0-00427243
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomMemo_vmt_090(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TCustomEdit_vmt_090(param_1,param_2);
  uVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_004aa678 + (uint)*(byte *)(param_1 + 0x83) * 4 + (uVar1 & 0x7f) * 0xc)
               | param_2[1] & ~*(uint *)(&DAT_004aa6a0 + (uint)*(byte *)((int)param_1 + 0x20e) * 4)
                 | 4 | *(uint *)(&DAT_004aa690 + (uint)*(byte *)((int)param_1 + 0x20d) * 4);
  return;
}


