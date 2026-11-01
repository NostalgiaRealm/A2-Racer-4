
/* ==== TCustomAction.vmt_018 @ 00439f54 ==== 
 * signature: undefined __register TCustomAction.vmt_018(int * param_1, uint * param_2)
 * body: 00439f54-00439f9f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomAction_vmt_018(int *param_1,uint *param_2)

{
  bool bVar1;
  undefined1 in_ZF;
  
  FUN_00403fec((uint *)param_1[2],(uint *)param_1[0x15]);
  if (((bool)in_ZF) && ((param_1[1] == 0 || ((*(byte *)(param_1[1] + 0x20) & 1) == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  TComponent_vmt_018(param_1,param_2);
  if ((bVar1) && (*(int *)(param_1[0x10] + 8) == 0)) {
    FUN_00439c70(param_1,param_2);
  }
  return;
}


