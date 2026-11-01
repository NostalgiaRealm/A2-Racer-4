
/* ==== TMenuItem.set_Action @ 0043f44c ==== 
 * signature: undefined __register TMenuItem.set_Action(int * param_1, int param_2, undefined4 param_3)
 * body: 0043f44c-0043f4b8
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Action(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 == 0) {
    FUN_00402f9c((int *)param_1[0xe]);
    param_1[0xe] = 0;
  }
  else {
    if (param_1[0xe] == 0) {
      iVar1 = FUN_00403178(param_1,param_2,param_3);
      iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      param_1[0xe] = iVar1;
    }
    (**(code **)(*(int *)param_1[0xe] + 0xc))((int *)param_1[0xe],param_2);
    iVar1 = param_1[0xe];
    *(int **)(iVar1 + 0xc) = param_1;
    *(code **)(iVar1 + 8) = FUN_0043f6a8;
    FUN_00403178(param_1,param_2,
                 CONCAT31((int3)((uint)extraout_ECX >> 8),(*(byte *)(param_2 + 0x20) & 1) != 0));
    FUN_0041564c(param_2,(int)param_1,extraout_ECX_00);
  }
  return;
}


