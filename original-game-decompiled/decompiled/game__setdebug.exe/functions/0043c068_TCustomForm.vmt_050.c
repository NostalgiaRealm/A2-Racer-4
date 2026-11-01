
/* ==== TCustomForm.vmt_050 @ 0043c068 ==== 
 * signature: undefined4 __register TCustomForm.vmt_050(int * param_1)
 * body: 0043c068-0043c092
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomForm_vmt_050(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x24] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    iVar2 = FUN_00402c5c(param_1);
    if (iVar1 == iVar2) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


