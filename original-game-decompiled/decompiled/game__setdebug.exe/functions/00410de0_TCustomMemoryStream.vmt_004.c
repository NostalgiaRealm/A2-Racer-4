
/* ==== TCustomMemoryStream.vmt_004 @ 00410de0 ==== 
 * signature: uint __register TCustomMemoryStream.vmt_004(int param_1, undefined4 * param_2, uint param_3)
 * body: 00410de0-00410e17
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

uint TCustomMemoryStream_vmt_004(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((iVar1 < 0) || ((int)param_3 < 0)) || (uVar2 = *(int *)(param_1 + 8) - iVar1, (int)uVar2 < 1)
     ) {
    uVar2 = 0;
  }
  else {
    if ((int)param_3 < (int)uVar2) {
      uVar2 = param_3;
    }
    FUN_004027d0((undefined4 *)(*(int *)(param_1 + 4) + iVar1),param_2,uVar2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar2;
  }
  return uVar2;
}


