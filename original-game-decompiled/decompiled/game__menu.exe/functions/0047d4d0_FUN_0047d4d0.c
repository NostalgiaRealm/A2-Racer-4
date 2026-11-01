
/* ==== FUN_0047d4d0 @ 0047d4d0 ==== 
 * signature: undefined __register FUN_0047d4d0(int * param_1, undefined4 param_2, int param_3)
 * body: 0047d4d0-0047d540
 */

void FUN_0047d4d0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(char *)((int)param_1 + 0x2d9) == '\0') {
    TForm_set_Position((int)param_1,'\x04');
  }
  else {
    iVar1 = param_1[0xb9];
    uVar2 = iVar1 + 0x1e;
    if (SCARRY4(iVar1,0x1e)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    if (SCARRY4(iVar1,0x24)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    if (SBORROW4(param_3,iVar1 + 0x24)) {
      thunk_FUN_00402808(uVar2);
    }
    (**(code **)(*param_1 + 0x7c))();
    piVar3 = (int *)FUN_00447524((int)param_1);
    FUN_00477d64(param_1,piVar3);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


