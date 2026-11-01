
/* ==== TCustomForm.vmt_050 @ 00446a18 ==== 
 * signature: undefined4 __register TCustomForm.vmt_050(int * param_1)
 * body: 00446a18-00446a42
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomForm_vmt_050(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x24] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    iVar2 = FUN_00402ee0(param_1);
    if (iVar1 == iVar2) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


