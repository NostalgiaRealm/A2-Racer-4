
/* ==== FUN_00549940 @ 00549940 ==== 
 * signature: undefined __fastcall FUN_00549940(void * param_1)
 * body: 00549940-005499da
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00549940(void *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)param_1 + 0x20);
  if (piVar2 == (int *)0x0) {
    *(undefined2 *)((int)param_1 + 0x40) = 0;
    return;
  }
  do {
    piVar1 = (int *)*piVar2;
    if ((_DAT_0074d63c <= (float)piVar2[0x16]) ||
       ((*(uint *)(piVar2[0x10] + 0x5c) & 0x300) == 0x100)) {
      FUN_0053e860(param_1,piVar2);
    }
    else if ((_DAT_0074d638 + DAT_0074d62c < (float)piVar2[0x16]) &&
            ((**(uint **)(piVar2[9] + 0xa8) & **(uint **)(piVar2[4] + 0xa8) & 3) != 0)) {
      FUN_004f6ce0(param_1,piVar2);
      FUN_004f6db0(param_1,piVar2);
    }
    piVar2 = piVar1;
  } while (piVar1 != (int *)0x0);
  *(undefined2 *)((int)param_1 + 0x40) = 0;
  return;
}


