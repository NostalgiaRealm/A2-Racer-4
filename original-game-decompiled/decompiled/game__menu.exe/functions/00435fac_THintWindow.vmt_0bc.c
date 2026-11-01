
/* ==== THintWindow.vmt_0bc @ 00435fac ==== 
 * signature: undefined __register THintWindow.vmt_0bc(int * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 00435fac-00435fd6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THintWindow_vmt_0bc(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14 [4];
  
  puVar2 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,local_14,param_3);
  return;
}


