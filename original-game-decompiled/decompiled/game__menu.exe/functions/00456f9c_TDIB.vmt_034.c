
/* ==== TDIB.vmt_034 @ 00456f9c ==== 
 * signature: undefined __register TDIB.vmt_034(int * param_1, int param_2, undefined4 param_3)
 * body: 00456f9c-00456ff2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_034(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    FUN_00456634(param_1,param_2,param_3);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x1c))();
    if (cVar1 == '\0') {
      FUN_00457194(param_1,param_1[0x23],param_2,param_1[0xf]);
    }
    else {
      iVar3 = 8;
      iVar2 = FUN_00454b38(param_1[0x23],1);
      FUN_00457194(param_1,iVar2,param_2,iVar3);
    }
  }
  return;
}


