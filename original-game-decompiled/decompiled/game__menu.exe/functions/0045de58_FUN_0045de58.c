
/* ==== FUN_0045de58 @ 0045de58 ==== 
 * signature: undefined FUN_0045de58(void)
 * body: 0045de58-0045deba
 */

void FUN_0045de58(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(HGDIOBJ *)(param_1 + 0x40) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    param_2 = extraout_EDX;
  }
  piVar2 = (int *)FUN_0045df74(param_1,CONCAT31((int3)((uint)param_2 >> 8),5));
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      uVar3 = FUN_0045d910(piVar2,0,extraout_ECX);
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      uVar3 = (**(code **)(*piVar2 + 0x2c))();
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      uVar3 = (**(code **)(*piVar2 + 0x20))();
      *(undefined4 *)(param_1 + 0x48) = uVar3;
    }
  }
  FUN_0045debc(param_1,0x4401);
  return;
}


