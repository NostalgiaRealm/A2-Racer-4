
/* ==== TControl.vmt_050 @ 00426678 ==== 
 * signature: undefined4 __register TControl.vmt_050(int * param_1)
 * body: 00426678-004266a3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TControl_vmt_050(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x24] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    uVar2 = FUN_00402e8c((int *)param_1[0x24],iVar1);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return 0;
}


