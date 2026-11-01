
/* ==== TCustomTabControl.vmt_084 @ 004854bc ==== 
 * signature: undefined TCustomTabControl.vmt_084(void)
 * body: 004854bc-004854ed
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomTabControl_vmt_084(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStack_1c [4];
  
  bVar3 = 0;
  FUN_00484b18(param_1,(int)auStack_1c);
  puVar2 = auStack_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  TWinControl_vmt_084();
  return;
}


