
/* ==== FUN_00404210 @ 00404210 ==== 
 * signature: undefined __register FUN_00404210(int * param_1, uint param_2)
 * body: 00404210-00404271
 */

void FUN_00404210(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iStack_10;
  
  puVar3 = (undefined4 *)0x0;
  if (param_2 != 0) {
    iStack_10 = *param_1;
    if ((iStack_10 != 0) && (*(int *)(iStack_10 + -8) == 1)) {
      iStack_10 = iStack_10 + -8;
      FUN_004027ac(&iStack_10,param_2 + 9);
      *param_1 = iStack_10 + 8;
      *(uint *)(iStack_10 + 4) = param_2;
      *(undefined1 *)(iStack_10 + 8 + param_2) = 0;
      return;
    }
    iStack_10 = 0x40424d;
    puVar3 = FUN_00403d20(param_2);
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[-1];
      if ((int)param_2 <= (int)puVar1[-1]) {
        uVar2 = param_2;
      }
      iStack_10 = 0x404265;
      FUN_004028d8(puVar1,puVar3,uVar2);
    }
  }
  iStack_10 = 0x40426c;
  FUN_00403c5c(param_1);
  *param_1 = (int)puVar3;
  return;
}


